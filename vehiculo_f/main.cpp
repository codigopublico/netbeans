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
    void para(string c, int p){
        strcpy(color, c);
        p = pot;
    }
};
int main(int argc, char** argv) {
   vehiculo ferrari;
   ferrari.para("rojo", 100);
    return 0;
}

