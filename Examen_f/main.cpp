/* 
 * File:   main.cpp
 * Author: prog
 *
 * Created on 8 de agosto de 2017, 16:43
 */

#include <cstdlib>
#include <iostream>
#include <stdlib.h>
using namespace std;

/*
 * 
 */
int pot(int n[]){
    int aux = 1;
    for(int i = 0; i < n[1]; i++){
        aux = n[0] * aux; 
    }
    return aux;
} 
void p1(){
    int n, n1;
    std::cout << "Altura:    ";
    std::cin >> n;
    std::cout << "Anchura    ";
    std::cin >> n1;
    for (int i = 0; i < n; i++){
        std::cout << "\n";
        for(int ii = 0; ii < n1; ii++){
            std::cout << "*";
        }
                
    }
            
}
void p2(){
    int notas[10];
    int aux = 0;
    int aux2 = 0;
    int aux3 = 0;
    int aux4 = 0;
    int aux5 = 0;
    int aux6 = 0;
    std::cout << "Dime las notas ";
    for(int i = 0; i < 10; i++){
        std::cin >> notas[i];
    }
    for(int i = 0; i < 10; i++){
        if(notas[i] >= 5){
            aux++;
            aux3 = notas[i] + aux3;
        }if(notas[i] < 5){
            aux2++;
            aux4 = notas[i] + aux4;
        }
        aux5++; 
        aux6 = notas[i] + aux6;
    }
    std::cout << "La media global es ... " << aux6/aux5 << "\n";
    std::cout << "Los aprovados son ...." << aux << "\n" << "Su media es " << aux3/aux;
    std::cout << "\nLos suspendidos son ....." << aux2 << "\n" << "Su media es " << aux4/aux2;
}
void p3(){
    int n[2];
    std::cout << "Dime un numero de filas:\n";
    std::cin >> n[0];
    std::cout << "Dime un numero de columnas\n";
    std::cin >> n[1];
    for(int i = 0; i < n[0]; i++){
        std::cout << "\n";
        for(int ii = 0; ii < n[1]; ii++){
            std::cout << ii + 1 << "  ";
        }
            
    }
}
void p4(){
    int n; 
    int aux = 0;
    std::cout << "Dime n valores \n";
    std::cin >> n;
    do{
    std::cout << "Dame " << n << " valores\n";
    }while(n < 0);
    int n1[n];
    for(int i = 0; i < n; i++){
        std::cin >> n1[i];
    }
    for(int i = 0; i < n; i++){
        aux = aux + n1[i];
    }
    std::cout << "Tu suma es .... " << aux;
}
void p5(){
    int n = 2;
    int s[n];
    int s1[n];
    int aux[n][n];
    for(int i = 0; i < n ; i++){
        s[i] = rand()%11;
    }
    for(int i = 0; i < n ; i++){
        s1[i] = rand()%11;
    }
    for(int ii = 0; ii < n; ii++){
        for(int i = 0; i < n; i++ ){
            aux[ii][i] = s[i] * s1[ii]; 
        }
    }
    for(int ii = 0; ii < n; ii++){
        for(int i = 0; i < n; i++ ){
            std::cout << aux[ii][i] << " = " << s[i] << " * " << s1[ii] <<  "\n";
        }
    }
}
void p7(){
    int n = 6;
    int n1[n];
    std::cout << "Dame 6 numeros:  \n";
     for(int i = 0; i < n; i++){
        std::cin >> n1[i];
    }
        for(int ii = 0; ii < n - 1; ii++){
            if(n1[ii] > n1[n - 1]){
                std::cout << n1[ii] << "  es mayor que   " << n1[n - 1] << "\n";
            }
            if(n1[ii] < n1[n - 1]){
                std::cout << n1[ii] << " es menor que " << n1[n - 1] << "\n";
            }
             if(n1[ii] == n1[n -1]){
                std::cout << n1[ii] << " es igual que " << n1[n - 1] << "\n";
            }
        }
    
}
void p9(){ 
    int aux = 0;
    int x = 3;
    int n1[x][2];
    std::cout << "Tiene que ser la edad entre 16 i 65 anyos, i el sueldo entre 600 i 3000 sino se te volvera a pedir \n ";
    for(int i = 0; i < x; i++){
        do{
            std::cout << "Edad: ";
            std::cin >> n1[i][0];
        }while(n1[i][0] < 16 || n1[i][0] > 65);
        do{
            std::cout << "Sueldo: ";
            std::cin >> n1[i][1];
        }while(n1[i][1] < 600 || n1[i][1] > 3000);
    }
    for(int i = 0; i < x; i++){
        aux = aux + n1[i][1];
    }
    std::cout << "La media de los sueldos es ..... " << aux/x << "\n ";
    aux = 0;
    for(int i = 0; i < x; i++){
        aux = aux + n1[i][0];
    }
    std::cout << "La media de las edades es " << aux/x << "\n ";
    aux = 0;
    for(int i = 0; i < x; i++){
        if(n1[i][1] > 1000){
            aux++;
        }
    }
    std::cout << "Combran mas de mil euros ... " << aux << "\n ";
    aux = 0;
    for(int i = 0; i < x; i++){
        if(n1[i][0] > 50){
            aux++;
        }
    }
    std::cout << "Tienen mas de 50 ....... " << aux << "\n ";
}
void p10(){
    int n[2];
    std::cout << "Dime dos numeros:  \n";
    for(int i = 0; i < 2; i++){
        std::cin >> n[i]; 
    }
    std::cout << "El resulado es :   "<<  pot(n);
}
int f1(int x){
    x = x * x;
    return x;
}
int f2(int y, int x){
    y = y*y;
    return x * y;
}
void p8(){
    int x = 2;
    int y = 3;
    int a = f1(x);
    int b = f2(y, a);
    std::cout << "  " << x <<"  " << y << "   " <<  "  " <<  a << "   "<< b;
    
    
}
void p6(){
    for(int i = 0; i < 11; i++){
        if(i == 0){
            std::cout << 0 << "\n";
        }
        if(i == 1){
            std::cout << 1 << "\n";
        }
        if(i == 2){
            std::cout << 2 << "\n";
        }
        if(i == 3){
            std::cout << 3 << "\n";
        }
        if(i == 4){
            std::cout << 4 << "\n";
        }
        if(i == 5){
            std::cout << 10 << "\n";
        }
        if(i == 6){
            std::cout << 9 << "\n";
        }
        if(i == 7){
            std::cout << 8 << "\n";
        }
        if(i == 8){
            std::cout << 7 << "\n";
        }
        if(i == 9){
            std::cout << 6 << "\n";
        }
        if(i == 10){
            std::cout << 5 << "\n";
        }
        
        
    }
    
}
int main(int argc, char** argv) {
    int n;
    //p1();//bien
    //p2();//bien
    //p3();//bien
    //p4();//bien
    //p5();//bien
    //p6();//bien
    //p7();//bien
    //p8();//bien
    //p9();//bien
    //p10();//bien
    std::cout << "\n dame una entrada para acabar el programa\n";//para no tener que usar getchar().
    std::cin >> n;
    return 0;
}

