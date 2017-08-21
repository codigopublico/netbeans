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
#include <string>
class Vehiculo{
public:
    Vehiculo(int initialSpeed, int inipot);
    ~Vehiculo();
    int getColor() const { return color; }
    int getpot() const { return pot; }
    int getvel() const {return vel; }
    void setColor(int color);
    void setpot(int pot);
    void setvel(int vel);
    void estado(){
        std::cout << "\n El numero del color es   " << getColor() << "\n I su potencia es .. " << getpot() << " \n";
    }
    void arrancar(){
        setvel(20);
        std::cout << "El coche ha arrancado su velocidad es  ...." << getvel() << "\n";
        }
    void adelantar(){
        setvel(getvel()*getpot());
        std::cout << "Para adelantar se pondra a la potencia maxima  " << getvel() << "\n";
    }
    void parar(){
        std::cout << "parando el coche .... Tarda un rato ....\n";
        for(int i = getvel(); i > 0; i--){
            std::cout << "\n";
            for(int ii = 0; ii <  i; ii++){
                std::cout << "*";
                i = i - 2;
            }
        }
        setvel(0);
    }
    public:
        int color;
        int pot;
        int vel;
    
};
class camion : Vehiculo {
public:
    camion(int initialSpeed, int inipot);
    ~camion();
    void cargar(){
        std::cout << "has cargo algo";
    }
};

