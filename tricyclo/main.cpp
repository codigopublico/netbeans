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
Tricycle::Tricycle(int initialSpeed){
    setSpeed(initialSpeed);
}
Tricycle::~Tricycle(){
    //No se hace nada.
}
//establece la velocidad del triciclo
void Tricycle::setSpeed(int newSpeed)
{
    if (newSpeed >= 0){
        speed = newSpeed;
    }
}
//crea un tricyclo i lo conduce
int main(int argc, char** argv) {
    Tricycle wichita(5);
    wichita.pedal();
    return 0;
}

