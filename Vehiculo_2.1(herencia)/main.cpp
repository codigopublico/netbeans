/* 
 * File:   main.cpp
 * Author: prog
 *
 * Created on 10 de agosto de 2017, 18:56
 */

#include <cstdlib>
#include "Tricycle.hpp"

using namespace std;

/*
 *
 */

//contructor del objecto
camion::camion(int initialSpeed, int inipot){
    setColor(initialSpeed);
    setpot(inipot);
    setvel(0);
}
camion::~camion(){
//no hace nada.
}
Vehiculo::Vehiculo(int initialColor, int inipot){
    setColor(initialColor);
    setpot(inipot);
    setvel(0);
}
Vehiculo::~Vehiculo(){
    //No se hace nada.
}
//establece la velocidad del triciclo
void Vehiculo::setColor(int newcolor)
{
    
        color = newcolor;
        
    
}
void Vehiculo::setpot(int newpot){
    pot = newpot;
}
void Vehiculo::setvel(int inivel){
    vel = inivel;
}
//crea un tricyclo i lo conduce
int main(int argc, char** argv) {
    int color = 2;
    Vehiculo Seat(color, 20);
    Seat.estado();
    Seat.arrancar();
    Seat.adelantar();
    Seat.parar();
    camion abel(color, 10);
    abel.cargar();
    return 0;
}