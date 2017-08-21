/* 
 * File:   main.cpp
 * Author: prog
 *
 * Created on 8 de agosto de 2017, 13:06
 */

#include <cstdlib>
#include <string>
#include <iostream>
#include "funciones.h"
#include <stdlib.h>


using namespace std;

/*
 * 
 */
int sumar(int n[]){
    int sum = n[0] + n[1];
    return sum;
}
int restar(int n[]){
    int sum = n[0] - n[1];
    return sum;
}
int multi(int n[]){
    int sum = n[0] * n[1];
    return sum;
}
int divi(int n[]){
    int sum = n[0] / n[1];
    return sum;
}
void p1(){
    int n[3];
    int aux;
    std::cout << "Calculadora...of c/c++\n";
    std::cout << "Dime dos numeros que los opero\n ";
    for(int i = 0; i < 2; i++){
        std::cin >> n[i];
    }
    std::cout << "Dime la operacion\n  sumar(1), restar(2), multiplicar(3), dividir(3) :   ";
    std::cin >> n[2];
    if(n[2] == 1){
        aux = sumar(n);
    }if(n[2] == 2){
        aux = restar(n);
    }if(n[2] == 3){
        aux = multi(n);
    }if(n[2] == 4){
        aux = divi(n);
    }
    std::cout << "El resultado es ...." << aux;
}
void p2(){
    std::cout << "\nDime dos numeros i te hago la potencia:        \n";
    int n[2];
    for(int i = 0; i < 2; i++){
        std::cin >> n[i];
    }
    std::cout << "Tu resultado es ... " << pot(n);
            
}
void p3(){
    int n;
    std::cout << "Dime un numero i te hago su factorial....\n";
    std::cin >> n;
    std::cout << "factorial(" << n << ") = " << factor(n) << "\n ";
            
}
void p4(){
    int a = 10;
    int aux;
    std::cout << "Imprimiendo la serie de fibonatsi ...\n ";
    for(int i = 0; i < 10; i++){
        aux = fibo(i);
        std::cout << aux << "  ";
    }
}
void p6(){
    int n[3];
    std::cout << "Dime cual es tu capital i te calculamos todo lo que acumulas en x anyos.   \n";
    std::cin >> n[0];
    std::cout << "Dime el interes   ";
    std::cin >> n[1];
    std::cout << "dime a cuantos anyos   ";
    std::cin >> n[2];
    std::cout << capital(n[0], n[1], n[2]) << "\n ";
}
void p7(){
    std::cout << "Combinatoria \n";
    std::cout << comb(20, 3);
}
void p11(){
    int m;
    int n;
    m = 10;//alumnos.
    n = 5;//assignaturas.
    int x[3][m][n];
    int aux[2];
    aux[0] = 0;
    for (int iii = 0; iii < 3; iii++){
    for(int i = 0; i < m; i++){
        for(int ii = 0; ii < n; ii++){
            x[iii][i][ii] = rand()%11;
        }
    }
    }
    for (int iii = 0; iii < 3; iii++){
    for(int i = 0; i < m; i++){
        std::cout << "\n alumno:  " << i << "  ";
        for(int ii = 0; ii < n; ii++){
            std::cout << "Assignatura(" << ii << ")  " << "nota:   ";
            std::cout<< x[iii][i][ii]<< "  ";
        }
    }
    }
    for(int iii = 0; iii < 3; iii++){
        for(int ii = 0; ii < n; ii++){
            std::cout << "Asignatura: " << ii << "  \n";
            for(int i= 0; i < m; i++){
                std::cout << "Alunmno:  " << i << "  ";
                std::cout << "nota: "<<  x[iii][i][ii] << "  ";
            }
        }
    }
    
}
int main(int argc, char** argv) 
{
    //p1();
    //p2();
    //p3();//factorial
    //p4();//fibonatsi Tengo que arreglar la funcion..... Fijarme en p6;
    //p6();
    //p7();//Repasar el resulatado.
    p11();
    return 0;
}

