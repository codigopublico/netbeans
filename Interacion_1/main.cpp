/* 
 * File:   main.cpp
 * Author: prog
 *
 * Created on 4 de agosto de 2017, 15:33
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include "funciones.h"

using namespace std;

/*
 * 
 */
void p1(){
    int n;
    std::cout << "Dime un numero i te digo si es primo o no ....\n";
    std::cin >> n;
    if (esprimo(n))
    {
        std::cout << "el numero " << n << " es primo\n";
    }else
        std::cout << "el numero " << n << " no es primo\n";
}
void p2(){
    std::cout << "Mostrando 100 numeros \n";
    for(int i = 1; i < 101; i++){
        std::cout << i << "\n";
    }
}
void p3(){
    std::cout << "Mostrando 100 numeros \n";
    int i = 100;
    while (i > 0){
        --i;
        std::cout << i << "  \n";
    }
}
void p4(){
    std::cout << "Mostrando 100 numeros \n";
    int i = 100;
    while (i > 0){
        --i;
        if(espar(i)){
            std::cout << i << "  \n";
        }
    }
}
void p5(){
    std::cout << "Mostrando 100 numeros \n";
    int i = 100;
    while (i > 0){
        --i;
        if(!espar(i)){
            std::cout << i << "  \n";
        }
    }
}
void p6(){
    std::cout << "Suma de los 100 numeros \n";
    int sum = 0;
    int i = 100;
    while (i > 0){
        --i;
        sum = sum + i;
    }
    std::cout << "El resultado es ....  " << sum; 
}
void p7(){
    std::cout << "Sumando los numeros pares. \n";
    int sum = 0;
    int i = 100;
    while (i > 0){
        --i;
        if(espar(i)){
            sum = sum + i;
        }
    }
     std::cout << "El resultado es ....  " << sum; 
}
void p8(){
    std::cout << "Sumando los numeros impares. \n";
    int sum = 0;
    int i = 100;
    while (i > 0){
        --i;
        if(!espar(i)){
            sum = sum + i;
        }
    }
     std::cout << "El resultado es ....  " << sum; 
}
void p9(){
    std::cout << "Sumando los numeros pares. \n";
    int sum = 0;
    int aux = 0;
    int i = 100;
    while (i > 0){
        --i;
        if(espar(i)){
            sum = sum + i;
            aux++;
        }
    }
     std::cout << "El resultado es ....  " << sum << " \n ";
     std::cout << "Hay " << aux << " pares ";
}
void p10(){
    std::cout << "Sumando los numeros pares. \n";
    int sum = 0;
    int aux = 0;
    int i = 100;
    while (i > 0){
        --i;
        if(!espar(i)){
            sum = sum + i;
            aux++;
        }
    }
     std::cout << "El resultado es ....  " << sum << " \n ";
     std::cout << "Hay " << aux << " impares ";
}
void p11(){
    int n[2];
    std::cout << "Dime dos numeros   ";
    for(int i = 0; i < 2; i++){
        std::cin >> n[i];
    }std::cout << " \n ";
    if(n[0] < n[1]){
        while(n[0] < n[1]){
            std::cout << n[0] << " \n";
            n[0]++;
        }
    }
}
void p12(){
    int n[2];
    std::cout << "Dime dos numeros   ";
    for(int i = 0; i < 2; i++){
        std::cin >> n[i];
    }std::cout << " \n ";
    if(n[0] < n[1]){
        while(n[0] < n[1]){
            if(espar(n[0])){
            std::cout << n[0] << " \n";
            }
            n[0]++;
        }
    }
}
void p13(){
    int n[2];
    std::cout << "Dime dos numeros   ";
    for(int i = 0; i < 2; i++){
        std::cin >> n[i];
    }std::cout << " \n ";
    n[0]++;
    if(n[0] < n[1]){
        while(n[0] < n[1]){
            if(!espar(n[0])){
            std::cout << n[0] << " \n";
            }
            n[0]++;
        }
    }
}
void p14(){
    int n[2];
    int sum = 0;
    std::cout << "Dime dos numeros   ";
    for(int i = 0; i < 2; i++){
        std::cin >> n[i];
    }std::cout << " \n ";
    n[0]++;
    if(n[0] < n[1]){
        while(n[0] < n[1]){
            sum = sum + n[0];
            n[0]++;
        }
        std::cout << "La suma da ... " << sum << "\n";
    }
}
void p15(){
    int n[2];
    int sum = 1;
    std::cout << "Dime dos numeros   ";
    for(int i = 0; i < 2; i++){
        std::cin >> n[i];
    }std::cout << " \n ";
    n[0]++;
    if(n[0] < n[1]){
        while(n[0] < n[1]){
            sum = sum * n[0];
            n[0]++;
        }
        std::cout << "La multiplicacion da ... " << sum << "\n";
    }
}
void p16(){
    int n;
    std::cout << "Dame un numero   ...... \n ";
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cout << "*";
    }
}
void p17(){
    for(int i = 0; i < 100; i++){
        for(int ii = 0; ii < 10; ii++ ){
            i++;
            std::cout << i << "  "; 
        }
        std::cout << "\n";
        i--;
    }
}
void p18(){
    std::cout << "las tablas de multiplicar";
    for(int i = 0; i < 10; i++){
        std::cout << "Las tabla del  " << i << "\n "; 
        for(int ii = 0; ii < 10; ii++){
            std::cout << i << " * " << ii << " = " << ii * i << "\n";
        }std::cout << "\n ";
    }
}
void p19(){
    int i = 9;
    std::cout << "Las tabla del  " << i << "\n "; 
        for(int ii = 0; ii < 10; ii++){
            std::cout << i << " * " << ii << " = " << ii * i << "\n";
        }
}
void p20(){
    string c = "N";
    while(c != "S"){
        std::cout << " desa salir S/N";
    std::cin >> c;
    }
        
}
void p21(){
    int n;
    std::cout << "Dime un numero i te digo su factorial \n ";
    std::cin >> n;
    std::cout << "Su factorial es ... " << factor(n) << "\n";
    }
void  p23(){
    int n[10000];
    int sum = 0;
    std::cout << "Dime x numeros i te hago su media. Cunado  pongas 0 se hace un exit\n";
    std::cin >> n[sum];
    while (n[sum] != 0 ){
        sum++;
        std::cin >> n[sum];
    }
    std::cout << "La media es de   "  << media(n, sum) << "\n ";
}
void p22(){
    int n[10];
    std::cout << "Dime 10 numeros i te hago su media.\n";
    for (int i = 0; i < 10; i++){
        std::cin >> n[i];
    }
    std::cout << "La media es de   "  << media(n, 10) << "\n ";
} 
void p24(){
    int sum =0; 
    for(int i = 0; i < 100; i++){
        sum = i * i + sum;
    }
    std::cout << "La suma de los cuadrados es " << sum << "\n";
}
void p25(){
    //succesion de fibonaci
    int a = 25;
    int n[a];
    int aux; 
    int aux2;
    n[0] = 0;
    n[1] = 1;
    for(int i = 2; i < a; i++){
        aux = i - 1;
        aux2 = i - 2;
        n[i] = n[aux] + n[aux2];
        std::cout << n[i] << "  ";
    }
}
int main(int argc, char** argv) {
    //El documento esta aqui ... /home/prog/Descargas/4. Iterativas.pdf
    //p1();
    //p2();
    //p3();
    //p4();
    //p5();
    //p6();
    //p7();
    //p8();
    //p9();
    //p10();
    //p11();
    //p12();
    //p13();
    //p14();
    //p15();
    //p16();
    //p17();
    //p18();
    //p19();
    //p20();
    //p21();
    //p22();
    //p23();
    //p24();
    p25();
    return 0;
}

