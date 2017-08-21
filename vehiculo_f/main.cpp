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
    void crea(string c, int p){
        color = c;
        p = pot;
    }
};
int main(int argc, char** argv) {
   vehiculo ferrari;
   ferrari.crea("rojo", 100);
    return 0;
}

