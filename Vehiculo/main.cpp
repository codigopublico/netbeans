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
Vehiculo::Vehiculo(int initialColor, int inipot){
    setColor(initialColor);
    setpot(inipot);
}
Vehiculo::~Vehiculo(){
    //No se hace nada.
}
//establece la velocidad del triciclo
void Vehiculo::setColor(int newcolor)
{
    if (newcolor >= 0){
        color = newcolor;
        
    }
}
void Vehiculo::setpot(int newpot){
    pot = newpot;
}
//crea un tricyclo i lo conduce
int main(int argc, char** argv) {
    Vehiculo wichita(5, 2);
    wichita.pedal();
    return 0;
}

