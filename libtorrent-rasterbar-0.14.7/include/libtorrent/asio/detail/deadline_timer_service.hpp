//
// deadline_timer_service.hpp
// ~~~~~~~~~~~~~~~~~~~~~~~~~~
//
// Copyright (c) 2003-2008 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef ASIO_DETAIL_DEADLINE_TIMER_SERVICE_HPP
#define ASIO_DETAIL_DEADLINE_TIMER_SERVICE_HPP

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)

#include "asio/detail/push_options.hpp"

#include "asio/detail/push_options.hpp"
#include <cstddef>
#include <boost/config.hpp>
#include <boost/date_time/posix_time/posix_time_types.hpp>
#include "asio/detail/pop_options.hpp"

#include "asio/error.hpp"
#include "asio/io_service.hpp"
#include "asio/detail/bind_handler.hpp"
#include "asio/detail/handler_base_from_member.hpp"
#include "asio/detail/noncopyable.hpp"
#include "asio/detail/service_base.hpp"
#include "asio/detail/socket_ops.hpp"
#include "asio/detail/socket_types.hpp"
#include "asio/detail/timer_queue.hpp"

namespace asio {
namespace detail {

template <typename Time_Traits, typename Timer_Scheduler>
class deadline_timer_service
  : public asio::detail::service_base<
      deadline_timer_service<Time_Traits, Timer_Scheduler> >
{
public:
  // The time type.
  typedef typename Time_Traits::time_type time_type;

  // The duration type.
  typedef typename Time_Traits::duration_type duration_type;

  // The implementation type of the timer. This type is dependent on the
  // underlying implementation of the timer service.
  struct implementation_type
    : private asio::detail::noncopyable
  {
    time_type expiry;
    bool might_have_pending_waits;
  };

  // Constructor.
  deadline_timer_service(asio::io_service& io_service)
    : asio::detail::service_base<
        deadline_timer_service<Time_Traits, Timer_Scheduler> >(io_service),
      scheduler_(asio::use_service<Timer_Scheduler>(io_service))
  {
    scheduler_.add_timer_queue(timer_queue_);
  }

  // Destructor.
  ~deadline_timer_service()
  {
    scheduler_.remove_timer_queue(timer_queue_);
  }

  // Destroy all user-defined handler objects owned by the service.
  void shutdown_service()
  {
  }

  // Construct a new timer implementation.
  void construct(implementation_type& impl)
  {
    impl.expiry = time_type();
    impl.might_have_pending_waits = false;
  }

  // Destroy a timer implementation.
  void destroy(implementation_type& impl)
  {
    asio::error_code ec;
    cancel(impl, ec);
  }

  // Cancel any asynchronous wait operations associated with the timer.
  std::size_t cancel(implementation_type& impl, asio::error_code& ec)
  {
    if (!impl.might_have_pending_waits)
    {
      ec = asio::error_code();
      return 0;
    }
    std::size_t count = scheduler_.cancel_timer(timer_queue_, &impl);
    impl.might_have_pending_waits = false;
    ec = asio::error_code();
    return count;
  }

  // Get the expiry time for the timer as an absolute time.
  time_type expires_at(const implementation_type& impl) const
  {
    return impl.expiry;
  }

  // Set the expiry time for the timer as an absolute time.
  std::size_t expires_at(implementation_type& impl,
      const time_type& expiry_time, asio::error_code& ec)
  {
    std::size_t count = cancel(impl, ec);
    impl.expiry = expiry_time;
    ec = asio::error_code();
    return count;
  }

  // Get the expiry time for the timer relative to now.
  duration_type expires_from_now(const implementation_type& impl) const
  {
    return Time_Traits::subtract(expires_at(impl), Time_Traits::now());
  }

  // Set the expiry time for the timer relative to now.
  std::size_t expires_from_now(implementation_type& impl,
      const duration_type& expiry_time, asio::error_code& ec)
  {
    return expires_at(impl,
        Time_Traits::add(Time_Traits::now(), expiry_time), ec);
  }

  // Perform a blocking wait on the timer.
  void wait(implementation_type& impl, asio::error_code& ec)
  {
    time_type now = Time_Traits::now();
    while (Time_Traits::less_than(now, impl.expiry))
    {
      boost::posix_time::time_duration timeout =
        Time_Traits::to_posix_duration(Time_Traits::subtract(impl.expiry, now));
      ::timeval tv;
      tv.tv_sec = timeout.total_seconds();
      tv.tv_usec = timeout.total_microseconds() % 1000000;
      asio::error_code ec;
      socket_ops::select(0, 0, 0, 0, &tv, ec);
      now = Time_Traits::now();
    }
    ec = asio::error_code();
  }

  template <typename Handler>
  class wait_handler : 
    public handler_base_from_member<Handler>
  {
  public:
    wait_handler(asio::io_service& io_service, Handler handler)
      : handler_base_from_member<Handler>(handler),
        io_service_(io_service),
        work_(io_service)
    {
    }

    void operator()(const asio::error_code& result)
    {
      io_service_.post(detail::bind_handler(this->handler_, result));
    }

  private:
    asio::io_service& io_service_;
    asio::io_service::work work_;
  };

  // Start an asynchronous wait on the timer.
  template <typename Handler>
  void async_wait(implementation_type& impl, Handler handler)
  {
    impl.might_have_pending_waits = true;
    scheduler_.schedule_timer(timer_queue_, impl.expiry,
        wait_handler<Handler>(this->get_io_service(), handler), &impl);
  }

private:
  // The queue of timers.
  timer_queue<Time_Traits> timer_queue_;

  // The object that schedules and executes timers. Usually a reactor.
  Timer_Scheduler& scheduler_;
};

} // namespace detail
} // namespace asio

#include "asio/detail/pop_options.hpp"

#endif // ASIO_DETAIL_DEADLINE_TIMER_SERVICE_HPP
