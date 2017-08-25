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
 * 
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
class ciudad : public patinete{
public:
    ciudad(int c) : patinete(){
        a = c;
    }

};
int main(int argc, char** argv) {
    patinete juan(5);
    juan.imprimir();
    ciudad manolo(3);
    manolo.imprimir();
    return 0;
}

