/* 
 * File:   main.cpp
 * Author: prog
 *
 * Created on 4 de agosto de 2017, 12:37
 */

#include <cstdlib>
#include <iostream>
#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;
int cnet(int n, int s){
        float aux;
        float es = 0;
        if (n > 10){
            es = 10;
        }
        if (n > 5){
            es = 7;
        }
        if (n > 3){
            es = 5;
        }
        if (es < 3 ){
            es = 3;
        }
        aux = (es/100) * s;
        return s + aux ;
        
    }
int converkg(string u)
    {
        int es = 0;
        if (u == "kg"){
            es = 0;
        }
        if (u == "hg"){
            es = 1;
        }
        if (u == "dag"){
            es = 2;
        }
        if (u == "g"){
            es = 3;
        }
        if (u == "dg"){
            es = 4;
        }
        if (u == "cg"){
            es = 5;
        }
        if (u == "mg"){
            es = 6;
        }
        return es;
    }

/*
 * Este es codigo final depurado ......
 */
void p1(){
    int n;
    std::cout << "Dime un numero i te digo si es primo o no ....\n";
    std::cin >> n;
    if (esprimo(n))
    {
        std::cout << "el numero " << n << " es primo";
    }else
        std::cout << "el numero " << n << " no es primo\n";
}
void p2(){
    int n;
    std::cout << "Dime un numero i te digo si es par o no ....\n";
    std::cin >> n;
    if (espar(n))
    {
        std::cout << "el numero " << n << " es par";
    }else
        std::cout << "el numero " << n << " no es par\n";
}
void p3(){
    int n;
    std::cout << "Dime un numero del uno al siete i te digo que dia de la setmana es ...\n";
    std::cin >> n;
    std::cout << "El dia de la setmana que escogiste fue ";
     if(n == 1){
         std::cout << "Lunes";
    }
    if(n == 2){
        std::cout << "Martes";
    }
    if(n == 3){
        std::cout << "Miercoles";
    }
     if(n == 4){
        std::cout << "Jueves";
    }
    if(n == 5){
        std::cout << "viernes";
    }
    if(n == 6){
        std::cout << "Sabado";
    }
    if(n == 7){
        std::cout << "Domingo";
    }if (n > 7){
        std::cout << " el error";
    }
    std::cout << "\n";
}
void p4(){
    int n;
std::cout << "Dime un numero de la setmana del uno al doce i te retorno un mes ...";
std::cin >> n;
 if(n == 1){
         std::cout << "Enero";
    }
    if(n == 2){
        std::cout << "Febrero";
    }
    if(n == 3){
        std::cout << "Marzo";
    }
     if(n == 4){
        std::cout << "Abril";
    }
    if(n == 5){
        std::cout << "Mayo";
    }
    if(n == 6){
        std::cout << "Junio";
    }
    if(n == 7){
        std::cout << "Julio";
    }
if (n == 8)
{
    std::cout << "Agosto";
}
if (n == 9)
{
    std::cout << "Setiembre";
}
if (n == 10)
{
    std::cout << "Ocutubre";

}
if (n == 11)
{
    std::cout << "Noviembre";
}
if (n == 12)
{
    std::cout << "Diciembre";
}
if (n > 13){
        std::cout << " el error";
    }
}
void p5()
{
    int n[3];
    int aux;
    std::cout << "Dame tres numeros i te los ordeno:  \n ";
    for(int i = 0; i < 3; i++)
    {
        std::cin >> n[i];
    }
    while (n[0] > n[1] || n[1] > n[2] || n[0] > n[2]){
        if (n[0] > n[1]){
            aux = n[0];
            n[0] = n[1];
            n[1] = aux;
            
        }if (n[1] > n[2]){
            aux = n[1];
            n[1] = n[2];
            n[2] = aux;
            
        }
        if (n[0] > n[2]){
            aux = n[0];
            n[0] = n[2];
            n[2] = aux;
            
        }
    }
    std::cout << "Tus numeros ordenados son los siguientes .... " << "\n" ;//Le falta la parte de ordenar lo quiero hacer con arrays.
    for (int i = 0; i < 3; i++ ){
        std::cout << "     "<<n[i];
    }
}
void p6(){
    int n[3];
    int aux;
    std::cout << "Dame tres numeros i te los ordeno:  \n ";
    for(int i = 0; i < 3; i++)
    {
        std::cin >> n[i];
    }
    while (n[0] < n[1] || n[1] < n[2] || n[0] < n[2]){
        if (n[0] < n[1]){
            aux = n[0];
            n[0] = n[1];
            n[1] = aux;
            
        }if (n[1] < n[2]){
            aux = n[1];
            n[1] = n[2];
            n[2] = aux;
            
        }
        if (n[0] < n[2]){
            aux = n[0];
            n[0] = n[2];
            n[2] = aux;
            
        }
    }
    std::cout << "Tus numeros ordenados son los siguientes .... " << "\n" ;//Le falta la parte de ordenar lo quiero hacer con arrays.
    for (int i = 0; i < 3; i++ ){
        std::cout << "     "<<n[i];
    }
}
void p7(){
     int n[3];
    int aux;
    std::cout << "Dame tres numeros i te los ordeno:  \n ";
    for(int i = 0; i < 3; i++)
    {
        std::cin >> n[i];
    }
    while (n[0] < n[1] || n[1] < n[2] || n[0] < n[2] && n[0] == n[1] && n[1] == n[2] && n[0] == n[2]){
        if (n[0] < n[1]){
            aux = n[0];
            n[0] = n[1];
            n[1] = aux;
            
        }if (n[1] < n[2]){
            aux = n[1];
            n[1] = n[2];
            n[2] = aux;
            
        }
        if (n[0] < n[2]){
            aux = n[0];
            n[0] = n[2];
            n[2] = aux;
            
        }
    }
    std::cout << "Tus numeros ordenados son los siguientes .... " << "\n" ;//Le falta la parte de ordenar lo quiero hacer con arrays.
    for (int i = 0; i < 3; i++ ){
        if(n[i] == n[i-1]){
        std::cout << "     " <<n[i];
        }else
            std::cout << "\n" <<n[i];
    }
}
void p8(){
     int n;
    std::cout << "dime un numero i te digo si es possitivo o negativo....\n";
    std::cin >> n;
    std::cout << "El numero es ";
    if(naff(n))
    {
        std::cout << "negativo ";
    }else
        std::cout << "Positivo ";
}
void p9()
{
    string n;
    std::cout << "Intenta adibinar la letra" << "\n";
  while( n != "S" && n != "N" ){
      std::cin >> n;
        
  }if (n == "S" || n == "N")
  {
      std::cout << "Escribiste la letra correcta, concretamente ..." << n << "\n";
  }
}
void p10(){
    int n;
    std::cout << "Dime un numero :  ";
    std::cin >> n;
    if (n > 100){
        std:cout << "Es mayor que 100 \n";
    }if (n < 100){
        std::cout << "Es menor que 100 \n ";
    }
}
void p11(){
    string c;
    std::cout << " Dime una letra i te digo si es vocal o consonante ....\n ";
    std::cin >> c;
    if(c == "a" || c == "e" || c == "i" || c == "o" || c == "u"){
        std::cout << "Es una vocal";
    }else
        std::cout << "Es una consonate"; 
}
void p12(){
        int n[3];
        int sum = 0;
        int aux = 0;
        std::cout << "Dime tres numeros : \n ";
        for (int i = 0; i < 3; i++)
        {
            std::cin >> n[i];
        }
        if (n[0] < n[1] && n[1] < n[2] && n[0] < n[2]){
            std::cout << "Es en orden creiente ...";
        }else
            std::cout << "No es en oriden creciente\n";
    }
void p13(){
        int n[3];
        int sum = 0;
        int aux = 0;
        std::cout << "Dime tres numeros : \n ";
        for (int i = 0; i < 3; i++)
        {
            std::cin >> n[i];
        }
        if (n[0] > n[1] && n[1] > n[2] && n[0] > n[2]){
            std::cout << "Es en orden decreiente ...";
        }std::cout << "No es en oriden decreciente\n";       
    }
void p14()
    {
        int n[10];
        int max = 0;
        int min = 9999999;
        std::cout << "Dime 10 numeros ....\n";
        for(int i = 0; i < 11; i++)
        {
            std::cout << "\n numero:  " << i << "\n"; 
                    std::cin >> n[i];
        }
        for (int i = 0; i < 11; i++){
            if(n[i] > max)
            {
                max = n[i];
            }
            if(n[i] < min)
            {
                min = n[i]; 
            }
        }
      std::cout << "El maximo es: " << max << "\n " << "El minimo es: " << min << "\n ";
    }
void p15(){
    int n[3];
        std::cout << "Dime tres numeros \n ";
        for(int i = 0; i < 3; i++)
        {
            std::cin >> n[i];
        }
        if(n[2] == n[0] + n[1])
        {
            std::cout << "El resultado es correcto...\n";
        }
}
void p16(){
    string p;
        std::cout << "Eligue \n archivo , buscar , salir \n";
        std::cin >>p;
        if (p == "archivo" || p == "buscar" || p == "salir"){
            std::cout << "Eligiste: " << p << "\n ";
        }
        else
            std::cout << "Error fatal";
}
void p17()
    {
        int n[2];
        int aux = 0;
        std::cout << "Dime dos numero \n";
        for(int i = 0; i < 2; i++)
        {
            std::cin >> n[i];
        }
        for(int i = 0; i < 2; i++)
        {
            if(esprimo(n[i])){
                std::cout << "El numero " << n[i] << "  es primo \n ";
                aux++;
            }
        }
        if(aux >= 2 )
        {
            std::cout << "Los dos numeros son primos ";
        }
    }
void p100(){
    int n;
        std::cout << "Dime un numero \n";
        std::cin >> n;
        if (esprimo(n)){
            std::cout << "Es primo";
        }else
            std::cout << "No es primo";
}
void p18(){
    int n[2];
        int aux;
        std::cout << "Dime dos numeros \n";
        for (int i = 0; i < 2 ; i++){
            std::cin >> n[i];
        }
        for (int i = 0; i < 2 ; i++){
            if(espar(n[i])){
                aux++;
            }
        }
        if (aux == 2)
        {
            std::cout << "Ambos son pares \n";
        }if (aux < 2  && aux > 0 )
        {
            std::cout << "Nada mas uno es par \n";
        }
        if (aux < 2  && aux <= 0 )
        {
            std::cout << "Ninguno es par";
        }
}
void p19(){
    int n[3];
        std:cout << "Dime 3 numeros i te digo si cumplen la funcion x0 = x1 * x2 ...... \n";
        for(int i = 0; i < 3; i++){
            std::cout << "x" << i << " = ";
            std::cin >> n[i];
        }
        if(n[0] == n[1] * n[2]){
            std::cout << "La funcion es correcta";
        }else 
            std::cout << "La funcion es incorrecta";
}
 void p20(){
        int n[3];
        std::cout << "Dime 3 numeros i te digo si cumplen la funcion x2 = x1 % x0\n";
        for(int i = 0; i < 3; i++){
            std::cout << "x" << i << " = ";
            std::cin >> n[i];
        }
        if(n[2] == n[0]%n[1] ){
            std::cout << "La funcion x1 % x0 es correcta ya que da  " << n[0]%n[1] << "Como digiste en x0: " << n[2];
        }else
            std::cout << "La funcion no es correcta ya que da " << n[0] << " % " << n[1]  << " = " << n[0]%n[1];
    }
 void p21(){
 string p;
        int r;
        int n[2];
        std::cout << "Calculos de perimetros ...\n";
        std::cout << "Eligue \n Equilatero , Isoseles , Escaleno \n";
        std::cin >>p;
        if (p == "Equilatero"){
            std::cout << "Eligiste: " << p << "\n ";
            std::cout << "Introduce los lados del triangulo(todos iguales) ....\n";
            for(int i = 0; i < 1; i++ ){
                std::cout << "Lado1 : ";
                std::cin >> n[i];
            }
            std::cout << "El resultado es ... "<< 3*n[0];
        }
        if (p == "Isoseles"){
            std::cout << "Eligiste: " << p << "\n ";
            std::cout << "Introduce los lados del triangulo ....";
            std::cout << "\n El primer lado son los iguales\n";
            for(int i = 0; i < 2; i++ ){
                std::cout << "Lado"  << i + 1 << " : ";
                std::cin >> n[i];
            }
            std::cout << "El resultado es ... "<< 2*n[0] + n[1];
        }
        if (p == "Escaleno"){
            std::cout << "Eligiste: " << p << "\n ";
            std::cout << "Introduce los lados del triangulo ....\n todos diferentes \n";
            for(int i = 0; i < 3; i++ ){
                std::cout <<  "Lado"  << i + 1 << " : ";
                std::cin >> n[i];
            }
            std::cout << "El resultado es ... "<< n[0] + n[1] + n[2];
        }
 }
 int p22(){
 //conversor de kg.
        int n;
        string u;
        int aux = 1;
        string uni = "kg, hg, dag, g, cg, mg";
        std::cout << "A que unidad quieres pasar las disponibles son :\n ";
        std::cout << uni << "\n ";
        std::cin >> u;
        std::cout << "Indicame la cantidad \n";
        std::cin >> n;
        for (int i=0; i < converkg(u); i++){
            aux = 10 * aux;
        }
        std::cout << "El resulado es ..."  << n*aux << "\n";
        
 }
 void p23(){
     //calculo de importes (iva)
        int n;
        std::cout << "Dime un importe i te calculo el beneficio \n";
        std::cin >> n;
        if(n < 15000){
            n = n - ( n * 10 / 100 ); 
        }if (n > 15000){
            n = n - ( n * 10 / 100 ); 
        }
        std::cout << "El beneficio es ...." << n <<  "\n ";
    }
 void p24(){
     int min, seg, h;
     std::cout << "Dime una hora i te digo que pasara un segundo despues....\n ";
     std::cout << "hora:  ";
     std::cin >> h;
     std::cout << "minuto:   "; 
     std::cin >> min;
     std::cout << "segundo:   ";
     std::cin >> seg;
     seg++;
     if (seg >= 60){
         seg = 0;
         min++;
     }
     if (min >= 60){
         min = 0;
         seg++;
     }
     if (h >= 60){
         h = 0;
         seg++;
         min = 0;
     }
     std::cout << "Paso un segundo " << h << " : " << min << " : " << " : " << seg << "\n";
 }
 void p25(){
        int n[2];
        std::cout << "Quanto cobras en bruto\n";
        std::cin >> n[0];
        std::cout << "Quantos anyos llevas en la empresa\n";
        std::cin >> n[1];
        std::cout << "Tu sueldo neto es ... "<< cnet(n[1], n[0]);
    }
int main(int argc, char** argv) {
    int n;
    std::cout << "Este es el inicio  del programa \n " << "Estas son las opiciones \n";
    std::cout << "Primos(1), Par(2), Dias de la setmana(3), meses del anyo(4), ordenar numeros(5)(menor a mayor), ordenar numeros(6)(mayor a menor), ordenar numeros(7)(mayor a menor a pruva de errores)  \n ";
    std::cout << "Positivo o negativo(8), Adivinar la letra(9), Mayor o menor(10), vocal o consonate(11), Comprovacion del orden creciente(12) \n ";
    std::cout << "Orden decreciente(13),  De mayor a menor (14), Comprovacion de suma(15), Prueva de menu(16),  2 primos(17), pares o impares(18)  \n";
    std::cout << "Comprovacion de la multiplicacion(19), Comprovacion del resto(20), Calculo de trinagulo(21), Calculo de unidades(22)  \n";
    std::cout << "Calculo de iva(23), calculo de hora(24), Sueldo trabajor(25) ";
    std::cin >> n;
    if(n == 1 ){  
    p1(); //este es para los numeros primos
    }
    if(n == 2){
        p2();//par o impar
    }if (n == 3){
        p3(); //dias de la setmana
    }if (n == 4){
        p4(); //meses del anyo.
    }if (n == 5){
        p5(); //Orden de los numeros...(menor a mayor)
    }if (n == 6){
        p6();//Orden de los numeros...(mayor a menor)
    }
    if (n == 7 ){
        p7();//Orden de los numeros...(mayor a menor) A prueva de errores.
    }
    if (n == 8){
        p8();
    }
    if(n == 9){
        p9();
    }
    if(n == 10){
        p10();
    }
    if(n == 11){
        p11();
    }
    if(n == 12){
        p12();
    }
    if(n == 13){
        p13();
    }if(n == 14){
        p14();
    }if(n == 15){
        p15();
    }
    if (n == 16){
        p16();
    }
    if (n == 18){
        p18();
    }
    if (n == 17){
        p17();
    }
    if (n == 19){
        p19();
    }
    if(n == 20){
        p20();
    }
    if (n == 21){
        p21();
    }if (n== 22){
        p22();
    }
    if(n==23){
        p23();
    }
    if(n == 24){
        p24();
    }
    if(n == 25){
        p25();
    }
    else
        std::cout << "Error";
    return 0;
}

