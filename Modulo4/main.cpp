/* 
 * File:   main.cpp
 * Author: prog
 *
 * Created on 7 de agosto de 2017, 14:28
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include "funciones.h"



using namespace std;

/*
 * 
 */
int dia_mes(int n){
    string r;
    if(n == 1){
        r = "Enero";
    }
    if(n == 2){
        r = "Febrero"; 
    }
    if(n == 3){
        r = "marzo"; 
    }
     if(n == 4){
       r = "Abril"; 
    }
    if(n == 5){
       r = "Mayo"; 
    }
    if(n == 6){
        r = "Junio"; 
    }
    if(n == 7){
        r = "Julio"; 
    }
if (n == 8)
{
    r = "Agosto";
}
if (n == 9)
{
     r = "Setiembre";
}
if (n == 10)
{
    r =  "Ocutubre";

}
if (n == 11)
{
    r =  "Noviembre";
}
if (n == 12)
{
    r =  "Diciembre";
}

    std::cout << r;
}
void p1(){
    int a = 2;
    int n[a];
    string nom[a];
    std::cout << "Calculo de mejor nota media \n";
    for(int i = 0; i < a; i++){
        std::cout << "Dime la nota:  ";
        std::cin >> n[i];
        std::cout << "Dime el numbre del alumno:    ";
        std::cin >> nom[i];
    }
    std::cout << "La mejor nota es " << max(n, a) << " I pertence a  ";
    for(int i = 0; i < a; i++){
        if(max(n, a) == n[i]){
            std::cout << nom[i] << "\n ";
        }
    }
}
void p3(){
    
}
int p3(){
    int n[3];
    int aux = 0;
    std::cout << "Dime cual es tu capital i te calculamos todo lo que acumulas en x anyos.   \n";
    std::cin >> n[0];
    std::cout << "Dime el interes   ";
    std::cin >> n[1];
    std::cout << "dime a cuantos anyos   ";
    std::cin >> n[2];
    for(int i = 0; i < n[2]; i++){
        n[0] = sumpor(n[0], n[1]);
    }
    std::cout << "El capital final es:  "<< n[0] << "  "; 
    return 0;
}
void p4(){
    int n[3];
    std::cout << "Dime el dia:   ";
    std::cin >> n[0];
    std::cout << "Dame el mes :  ";
    std::cin >> n[1];
    std::cout << "dame el anyo:   ";
    std::cin >> n[2];
    std::cout << n[0] << " de ";
    dia_mes(2);
    std::cout << " de " << n[2]; 
}
int main(int argc, char** argv) {
    ///home/prog/Descargas/Módulo 4 - Ejercicios.pdf
    //p1();
    p2();
    //p3();
    //p4(); 
    

    return 0;
}

