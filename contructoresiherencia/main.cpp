/* 
 * File:   main.cpp
 * Author: prog
 *
 * Created on 25 de agosto de 2017, 12:04
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * Ejemplo de classe herencia con constructores simple.
 */
class patinete{
public:
    int a;
    patinete(int c){
        a = c;
    }
    void imprimir(){
        std::cout << a << " " ;
    }
};
class pciudad : public patinete{
public:
    pciudad(int c) : patinete(c){
        
    }

};
int main(int argc, char** argv) {
    patinete juan(5);
    juan.imprimir();
    pciudad manolo(45);
    manolo.imprimir();
    return 0;
}

