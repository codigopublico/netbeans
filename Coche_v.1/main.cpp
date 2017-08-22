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
#include <stdlib.h>
using namespace std;

/*
 * 
 */
class arbol{
public:
    int aaux1;
    void lubi(){
        aaux1 = 1;
        std::cout << "\nlubricando el arbol de levas\n";
    }
    int get(){
        return aaux1;
    }
};
class bujias{
public:
    int baux;
    void pren(){
        baux = rand()%2;//hacer la funcion rand.
        std::cout << "\nHaciendo la chispa al motor\n";
    }
    int get(){
        return baux;
    }
};
class motor:private arbol, bujias{
public:
    int arra; //Variable que indica si el motor esta arrancado
    void arrancar(){
        Oaux.lubi();
        Oaux2.pren();
        if(Oaux2.get() == 1 && Oaux.get() == 1){
            arra = 1;
            std::cout << "El choche a arrancado";
        }
    }
private:
    arbol Oaux;
    bujias Oaux2;
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

