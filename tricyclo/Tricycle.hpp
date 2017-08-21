/* 
 * File:   Tricycle.hpp
 * Author: prog
 *
 * Created on 10 de agosto de 2017, 18:56
 */

#ifndef TRICYCLE_HPP
#define	TRICYCLE_HPP



#endif	/* TRICYCLE_HPP */
#include <iostream>
class Tricycle{
public:
    Tricycle(int initialSpeed);
    ~Tricycle();
    int getSpeed() const { return speed; }
    void setSpeed(int speed);
    void pedal(){
        setSpeed(speed + 1);
        std::cout << "\n Pedaling " << getSpeed() << " mph\n";
    }
    void brake()
    {
        setSpeed(speed - 1);
        std::cout << "\n Pedaling " << getSpeed() << " mph\n";
    }
    private:
        int speed;
    
};
