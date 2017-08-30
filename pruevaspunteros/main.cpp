/* 
 * File:   main.cpp
 * Author: prog
 *
 * Created on 13 de agosto de 2017, 15:44
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

/*
 * 
 */
void imprime(string p2[]);
void imprime(string  p2[]){
    int i = 0;
    while(i<7){
    std::cout << p2[i];
    std::cout << "\n";
    i++;
    }
}
void doSomething(char charArray[])
{
    char* p = charArray;
    for (; *p != '\0'; ++p)
    {
         // if '\0' happens to be valid data for your app, 
         // then you can (maybe) use some other value as
         // sentinel
        std::cout << *p;
    }
    int arraySize = p - charArray;

    // now we know the array size, so we can do some thing
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
    string dia[] = { "Domingo", "Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado" };
    imprime(dia);
}
void p3(){
const string  letra[] = {"letra", "jodida"}; 
 for(int i = 0; i < 2; i++){
     for (int ii = 0; ii < 1; ii++){
         std::cout  << letra[i];
     }
     std::cout << "\n";
 }
}
int main(int argc, char** argv) {
    //p1();
    //p2();
    p3();
}

