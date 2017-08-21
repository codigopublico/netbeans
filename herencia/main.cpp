/* 
 * File:   main.cpp
 * Author: prog
 *
 * Created on 14 de agosto de 2017, 18:55
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
//esto es una herencia classica lo que
class Vehiculo{
public:
    int ncolor;
    int pot;
    int vel = 0;
    int aux = 0;
    void setcolor(int color){
        ncolor = color;
    }
    void setpotencia(int p){
        pot = p;
    }
    void arrancar(){
        aux = 1;
    }
    void accelerar(){
        if(aux){
            vel = vel + pot;
        }
    }
    void estado(){
        std::cout << "El numero de color del vehiculo es  " << ncolor << "\n"; 
        std::cout << "La velocidad es de  " << vel << "\n";
        std::cout << "Su potencia es de " << pot << "\n";
    }
};
class camion : public Vehiculo{
public:
    int carg = 0;
    void carga(){
        carg = 1;
    }
    void descarga(){
        carg = 0;
    }
    void estado(){
         std::cout << "El numero de color del vehiculo es  " << ncolor << "\n"; 
        std::cout << "La velocidad es de  " << vel << "\n";
        std::cout << "Su potencia es de " << pot << "\n";
        if(carg){
        std::cout << "El camion esta  cargado" << "\n" ;
        }
        if(!carg){
            std::cout << "El camion esta descargado" << "\n";
        }
    }
};
int main(int argc, char** argv) {
    Vehiculo Seat;
    Seat.setcolor(1);
    Seat.setpotencia(50);
    Seat.estado();
    Seat.arrancar();
    Seat.accelerar();
    Seat.estado();
    //herencia
    camion abel;
    abel.setcolor(2);
    abel.setpotencia(30);
    abel.carga();
    abel.estado();
    return 0;
}

