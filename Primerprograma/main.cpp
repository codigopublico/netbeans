/* 
 * File:   main.cpp
 * Author: prog
 *
 * Created on 1 de agosto de 2017, 12:37
 */

#include <cstdlib>
#include <iostream>
#include "Calculadora.h"
using namespace std;
int suma(int a, int b);

/*
 * 
 */
int main() {
    Calculadora calc;
    std::cout << "Bienvendio al curso de c++ ";
    std::cout << "la suma de 7 + 2  es ..." << calc.restar(7, 2); 
    return 0;
}

