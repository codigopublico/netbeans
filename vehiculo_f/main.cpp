/* 
 * File:   main.cpp
 * Author: prog
 *
 * Created on 21 de agosto de 2017, 17:03
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

/*
 * 
 */
class vehiculo{
public:
    string color;
    int pot;
    int aux = 0;
    void crea(string c, int p){
        color = c;
        p = pot;
    }
    void arrancar(){
        aux = 1;
    }
    void parar(){
        aux = 0;
    }
    void adelatar(){
        std::cout << "El Vehiculo a adelantado";
    }
    void estado(){
        if (aux == 0){
        std::cout << "El vehiculo esta parado";
        }else{
            std::cout << "El vehiculo esta arrancado";
        }
        
    }
};
int main(int argc, char** argv) {
   vehiculo ferrari;
   ferrari.crea("rojo", 100);
   ferrari.estado();
    return 0;
}

