/* 
 * File:   main.cpp
 * Author: prog
 *
 * Created on 7 de agosto de 2017, 15:44
 */


#include <cstdlib>
#include <iostream>
#include <string>
#include "funciones2.h"

using namespace std;

/*
 * 
 */
void p1(){
    std::cout << "El abecedadrio ...... \n";
    int a = 27;
    string r =  "abcdefghijklmnopkrstivwxyz";
    for(int i = 0; i < a; i++){
        std::cout << r[i] << " ";
    }
    std::cout << "\n al reves \n";
    for(int i = a; i >=  0; i--){
        std::cout << r[i] << "  ";
    }
}
void p2(){
    int n[10];
    std::cout << "Dime 10 numeros i te los revierto \n";
    for (int i = 0; i < 10; i++){
        std::cin >> n[i];
    }
    std::cout << "\n En orden inverso\n";
    for (int i = 9; i >= 0; i--){
        std::cout << n[i] << "    ";
    }
}
void p3(){
    int n[10];
    std::cout << "Dime 10 numeros i te digo si son superiores a 22 \n";
    for (int i = 0; i < 10; i++){
        std::cin >> n[i];
    }
    std::cout << "\n Superiores a 22\n";
    for (int i = 9; i >= 0; i--){
        if(n[i] > 22){
            std::cout << n[i] << "    ";
        }
            }
}
void p4(){
    int a = 10;
    int n[a];
    n[0] = 0;
    std::cout << "Dime 9 numeros i te digo si los repetiste: " << "\n ";
    for(int i = 1; i < a; i++){
        std::cin >> n[i];
    }std::cout << "\n Los repetidos son......\n";
    for(int i = 0; i < a; i++ ){
        for(int ii = 0; ii < a; ii++){
            if(i != ii){
            if(n[i] == n[ii]){
                std::cout << n[i] << "  ";
            }
          }
        }
    }
}
void p5(){
    int a = 1000;
    std::cout << "Cuantos numeros quieres introducir ...:   ";
    std::cin >> a;
    int n[a];
    std::cout << "Empieza a introducir numeros ..... \n";
    for(int i = 0; i < a; i++){
        std::cin >> n[i];
    }
    std::cout << "La autosuma es de " << autosum(n, a) << " El maximo es :  " << max(n, a) << " El minimo es ... " << min(n, a );
}
void p6(){
    //mirar lo que tengo que hacer...
    int n[99999];
    int aux2[2][9999];
    int aux[2];
    aux[0] = 0;
    aux[1] = 0;
    int i = 0;
    std::cout << "Si pones -1 se cierra las notas \n";
    do{
        std::cin >> n[i];
        i++;
    }while(n[i - 1] != -1);
    for(int ii = 0; ii < i; ii++){
        if(n[ii]  > -1 ){
            if (n[ii]  >= 5){
                aux2[0][ii] = n[ii];
                aux[0] = aux[0] + 1;
            }
        }
        
        }
    for(int ii = 0; ii < i; ii++){
        if(n[ii]  > -1 ){
            if (n[ii]  < 5){
                aux2[1][ii] = n[ii];
                aux[1] = aux[1] + 1;
            }
            
            
            
            
        }
        
        }
    std::cout << "La media de aprovados :  " << media(aux2[0], aux[0]);
    std::cout << "\n La media de susptedidos :  " << media(aux2[1], aux[1]);
}
void p7(){
    int n[2][99999];
    std::cout << "Dime dos series de numeros se cierra con -1: ";
    int i = 0;
    do{
        std::cout << "Primera serie: ";
        std::cin >> n[1][i];
        std::cout << "Segona serie: ";
        std::cin >> n[0][i];
        i++;
    }while(n[0][i - 1] != -1 && n[1][i - 1] != -1);
    for(int ii = 0; ii < i; ii++ ){
        if(n[0][ii] != -1 && n[1][ii] != -1){
        if(n[0][ii] > n[1][ii]){
          std::cout << n[0][ii] <<" mayor que " << n[1][ii] << "\n ";  
        }
         if(n[0][ii] < n[1][ii]){
            std::cout << n[0][ii] <<" menor que " << n[1][ii] << "\n ";
        }
        }
    }
}
void p8(){
    int aux[5];
    int aux2[5];
    int n[10];
    std::cout << "Dime 10 numeros";
    for(int i = 0; i < 10; i++){
        std::cin >> n[i];
    }
    for(int i = 0; i < 10; i++){
        aux[i] = n[i];
        if (i >= 5){
            aux2[i - 5] = n[i];
        }
    }
    std::cout << "Mostrando los dos arrays .....\n";
    for(int i; i < 5; i++){
        std::cout << aux[i] << "  ";
        std::cout << aux2[i] < "  ";
    }
}
void p9(){
    int n[10];
    int aux[4];
    int vaux[10];
    for(int i = 0; i < 10; i++){
        vaux[i] = 0;
    }
    std::cout << "Dime las notas ";
    for(int i = 0; i < 10; i++){
        std::cin >> n[i];
    }
    aux[0] = 0;
    for(int i = 0; i < 10; i++){
        if(n[i] >= 5){
            aux[0]++;
            vaux[0] = vaux[0] + n[i];
        }
        if(n[i] < 5){
            aux[1]++;
            vaux[1] = vaux[1] + n[i];
        }
    }
    std::cout << "La media de aprovadosr .....  " << vaux[0]/aux[0]; 
    std::cout << "\nLa media de suspendidos es .....  " << vaux[1]/aux[1];
    std::cout << "\nEl total de aprovados es ........" << aux[0];
    std::cout << "\nEl total de aprovados es ........" << aux[1];
}
void p11(){
    std::cout << "Tablas de multiplicar....\n";
    int n[10][10];
    for(int i = 0; i <= 10; i++){
        for(int ii = 0; ii <= 10; ii++){
            n[i][ii] = i * ii;
        }
    }
    for(int e = 0; e <= 11; e++){
        std::cout << "tabla del " << n[e][1] - 1 << "\n";
        for(int ee = 0; ee <= 11; ee++){
            std::cout << n[e][ee] << "  ";
        }
    }
}
void p12(){
    std::cout << "Patron de ajedrez....\n";
    int n[2][8];
    int ii = 0;
    for(int i = 0; i < 2; i++){
        ii = 0;
        while(ii < 8){
            n[i][ii] = 1;
            n[i][ii + 1] = 0;
            ii = ii + 2;
        }
    }
    for(int i = 0; i < 2; i++){
        std::cout << "\n ";
        for(int ii = 0; ii < 8; ii++){
            std::cout << n[i][ii] << "  "; 
        }
    }
    
    
    
}
void p13(){
    int n[3][4];
    int ii;
    for(int i = 0; i < 3; i++){
        ii = 0;
        while(ii < 4){
            n[i][ii] = ii + 1;
            ii++;
            
        }
    }
     for(int i = 0; i < 3; i++){
        std::cout << "\n ";
        for(int ii = 0; ii < 4; ii++){
            std::cout << n[i][ii] << "  "; 
        }
    }
}
void p14(){
    int n[8][5];
    int ii;
    for(int i = 0; i < 8; i++){
        ii = 0;
        while(ii < 5){
            n[i][ii] = ii + 1 + i;
            ii++;
            
        }
    }
    for(int i = 0; i < 8; i++){
        std::cout << "\n ";
        for(int ii = 0; ii < 5; ii++){
            std::cout << n[i][ii] << "  "; 
        }
    }
}
int main(int argc, char** argv) {
    //Módulo 5 - Ejercicios.pdf
    //p1();//abecedario
    //p2(); //orden inverso
    //p3();// Superiores a 22.
    //p4();//repetidos 
    //p5();//autosuma
    //p6(); // faltan los suspedidos que no funcionan
    //p7(); //mayor o menor 
    //p8(); //faltan los arrays a ver si puedo hacerlo.
    //p9(); //falta renderizar
    //p10();//preguntar a ver que pasa.
    //p11();//Ya esta todo escho. 
    //p12();
    //p13();
    // p14();
    
    return 0;
}

