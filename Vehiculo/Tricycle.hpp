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
class Vehiculo{
public:
    Vehiculo(int initialSpeed, int inipot);
    ~Vehiculo();
    int getColor() const { return color; }
    int getpot() const { return pot; }
    void setColor(int color);
    void setpot(int pot);
    void pedal(){
        setColor(color + 1);
        std::cout << "\n El color es  " << getColor() << "\n I su potencia es .. " << getpot() << " \n";
    }
    private:
        int color;
        int pot;
    
};
