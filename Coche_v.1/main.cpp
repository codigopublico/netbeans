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
class arbol{
public:
    int aux;
    lub(){
        aux = 1;
        std::cout << "lubricando el arbol de levas";
    }
    gets(){
        return aux;
    }
};
class bujias{
public:
    int aux;
    pre(){
        aux = 1;//hacer la funcion rand.
        std::cout << "Haciendo la chispa al motor";
    }
    gets(){
        return aux;
    }
};
class motor{
public:
    int arra; //Variable que indica si el motor esta arrancado
    void arrancar(){
        arbol.lub();
        bujias.pre();
        if(arbol.gets() == 1 && bujias.gets() == 1){
            arra = 1;
        }
    }
};
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
class coche : public vehiculo{
    int aux2;
    void adelatar(){
        aux2++;
    }
    void frenar(){
        aux2--;
    }
    
};
int main(int argc, char** argv) {
    coche ferri;
    ferri.crea("Rojo", 200);
    ferri.arrancar();
    ferri.estado();
    motor prueva;
    prueva.arrancar();
    return 0;
}

