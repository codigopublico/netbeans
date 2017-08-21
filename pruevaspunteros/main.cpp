/* 
 * File:   main.cpp
 * Author: prog
 *
 * Created on 13 de agosto de 2017, 15:44
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
void imprime(const char *p2 );
void imprime(char  *p2){
    for ( ; *p2 != '\0'; p2++  ){
        std::cout << std::endl << *p2;
        }
    std::cout << "\n";
    }
void p1(){
    int *p;
    int ID[] = {1, 2, 3, 4, 5, 6 };
    p = &ID[0];
    std::cout << std::endl << *p << "\n";
    p += 2;
    std::cout << std::endl << *p << "\n";
}
void p2(){
    char *dia[7] = { "Domingo", "Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado" };
    char *dias;
    imprime( *dia);
}
int main(int argc, char** argv) {
    p1();
    p2();
}

