/* 
 * File:   main.cpp
 * Author: prog
 *
 * Created on 1 de agosto de 2017, 10:06
 */

#include <cstdlib>
#include <iostream>
#include "calc.h"
using namespace std;

/*
 * 
 */
int add(int x, int y){
    std::cout << "\n Rulando el calculator ... \n" ;
    return(x + y);

}
int main(int argc, char** argv) {
    std::cout << "Cuanto es la suma de 5 + 2 ";
    std::cout << "El resuldado de  5 + 2 es ..." << add(5, 2) << " I la multiplicaion de cabezeras es ..." << cal(5, 2);
    return 0;
}

