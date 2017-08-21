/* 
 * File:   main.cpp
 * Author: prog
 *
 * Created on 13 de agosto de 2017, 15:44
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

/*
 * 
 */
void imprime(char p2 );
void imprime(string  p2){
    std::cout << p2;
    std::cout << "\n";
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
    char *dia[7] = { "Domingo", "Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado" };
    for(int i = 0; i < 7; i++){
        *dia++;
    imprime(*dia);
    }
}
int main(int argc, char** argv) {
    p1();
    p2();
}

