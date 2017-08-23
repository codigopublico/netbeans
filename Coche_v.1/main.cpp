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
        baux = rand() % 2 ;//hacer la funcion rand.
        std::cout << "\nHaciendo la chispa al motor\n";
    }
    int get(){
        return baux;
    }
};
class valvulas{
public:
    int vaux;
    void abre(){
        vaux = 1;
        std::cout << "\nAbriendo las valvulas\n";
        
    }
    int get(){
        return vaux;
    }
};
class velocimetro{
public:
    int vel = 0;
    void setvel(int v){
        vel = v;
    }
    int get(){
        return vel;
    }
};
class revol{
public:
    int rev;
    void setrev(int r){
        rev = r;
    }
    int get(){
        return rev;
    }
};
class bombilla{
public:
    int enceder(){
        std::cout << "La bombilla esta encida";
    }
    int apagar(){
        std::cout << "La bombilla esta apaga";
    }
};
class reles{
public:
    int aux;
    void enceder(){
        aux = 1;
    }
    void apagar(){
        aux = 0;
    }
    int get(){
        if(aux == 1){
            Obom.enceder();
        }else{
            Obom.apagar();
        }
        return aux;
    }
private:
    bombilla Obom;
};
class leds{
public:
    int tra;//Leds traceros
    int del;//leds delanteros
    void traceros(int a){
        if(a > 0){
            tra = 1;
        }else{
            tra = 0;
        }
        
    }
    void delanteros(int a){
        if(a > 0){
            del = 1;
        }else{
            del = 0;
        }
        
    }
    
private:
    reles Orel;
};
class intrumentos : public leds, revol, velocimetro{
public:
    void panel(){
        std::cout << "\nEl led delatera esta " << del << "El led trasero esta " << tra;
        std::cout << "\nEl panel de revoluciones mustra " <<  rev;
        std::cout << "\nEl panel de velocidad muestra\n  " << vel;
    }
    void botones(int d, int t){
        del = d;
        tra = t;
    }
    
};
class motor : public revol, velocimetro{
public:
    int arra; //Variable que indica si el motor esta arrancado
    void arrancar(){
        Oaux.lubi();
        Oaux3.abre();
        Oaux2.pren();
        if(Oaux2.get() == 1 && Oaux.get() == 1 && Oaux3.get() == 1){
            arra = 1;
            vel = 0;
            rev = 0;
            std::cout << "\nEl choche a arrancado\n";
        }else{
            std::cout << "\nEl coche no arranca dale de nuevo\n";
            arra = 0;
            rev = 0;
            vel = 0;
        }
    }
        void acce(){
            if(rev>1000){
                rev = 0;
            }
            rev = rev + 30;
            vel = vel + 30;
        }
        void fren(){
            rev = rev - 30;
            if(rev<0){
                rev = 0;
            }
            vel = vel + 30;
        }
        void parar(){
            rev = 0;
            vel = 0;
        }
private:
    arbol Oaux;
    bujias Oaux2;
    valvulas Oaux3;
};
class vehiculo : public motor, intrumentos{
public:
    string color;
    int pot;
    void crea(string c, int p){
        color = c;
        p = pot;
    }
    void estado(){
        if (arra == 0){
        std::cout << "El vehiculo esta parado";
        }else{
            std::cout << "El vehiculo esta arrancado";
        }
        
    }
private:
    int aux;
};
class coche : public vehiculo{
public:
    int aux2;
    void adelatar(){
        aux2++;
    }
    void frenar(){
        aux2--;
    }
    
};
int main(int argc, char** argv) {
    vehiculo ferri;
    ferri.crea("Rojo", 200);
    ferri.estado();
    ferri.botones(1, 1);
    ferri.acce();
    ferri.free();
    ferri.panel();
    return 0;
}

