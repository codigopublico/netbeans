/* 
 * File:   main.cpp
 * Author: prog
 *
 * Created on 25 de agosto de 2017, 13:20
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * Esto sirve como resolver el tema de los head los punteros i demas.
 */
int* retorno(int r[]){
    int *p = new int[6];
    p = r;
    return p;
}
int main(int argc, char** argv) {
    int r[] = {1, 2, 3, 4, 5, 6};
    int *e = retorno(r); 
    int v[6];
    for(int i = 0; i < 6; i++){
        v[i] = *e;
    std::cout << v[i] << "\n";
     e++;
    }
    return 0;
}

