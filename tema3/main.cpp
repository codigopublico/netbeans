/* 
 * File:   main.cpp
 * Author: prog
 *
 * Created on 2 de agosto de 2017, 13:52
 */

#include <cstdlib>
#include <iostream>
#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;

/*
 * 
 */
void p1()
{
    int n;
    std::cout << "Dime un numero i te digo si es primo o no ....\n";
    std::cin >> n;
    if (esprimo(n))
    {
        std::cout << "el numero " << n << " es primo";
    }else
        std::cout << "el numero " << n << " no es primo\n";
     
}
void p2()
//par o impar
{
int n;
    std::cout << "Dime un numero i te digo si es par o impar \n";
    std::cin >> n;
     if (espar(n))
    {
        std::cout << "el numero " << n << " es par";
    }else
        std::cout << "el numero " << n << " no es par\n";
}
void p3()
{
    //dias de la setmana
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
    std::cout << "/n";
}
void p4()
{
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
    std::cout << "Dame tres numeros i te los ordeno";
    for(int i = 0; i < 3; i++)
    {
        std::cout << i << "\n";
        std::cin >> n[i];
    }
    while (n[0] > n[1] && n[1] > n[2]){
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
}
void p8()
{
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
    char l[90];
    std::cout << " Dime una letra i te digo si es vocal o consonante ....\n ";
    std::cin >> l;
    //std::cout<< vocal[1];
    int es = 0;
    /*if (l=='a' || l=='e' || l=='i' || l=='o' || l="u")
    {
        es = 1;
        std::cout << "Es una vocal \n";
    }else
        std::cout << "No es una vocal \n";*/
    /*for (int i = 0; i < 5; i++){
        if(vocal[i] == l){
            esvocal = 1;
            break;
            
        } 
    */}
    void p13(){
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
        }       
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
    void p16()
    {
        string p;
        std::cout << "Eligue \n archivo , buscar , salir \n";
        std::cin >>p;
        if (p == "archivo" || p == "buscar" || p == "salir"){
            std::cout << "Eligiste: " << p << "\n ";
        }
        if(p != "archivo" || p != "buscar" || p != "salir")
        {
            std::cout << "Error fatal";
        }
            
    }
    void p17()
    {
        int n[1];
        std::cout << "Dime un numero \n";
        for(int i = 0; i < 2; i++)
        {
            std::cin >> n[i];
        }
        for(int i = 0; i < 2; i++)
        {
            if(esprimo(n[i])){
                std::cout << "El numero " << n[i] << "  es primo \n ";
                
            }
        }
        /*if(aux >= 3 )
        {
            std::cout << "Los dos numeros son primos ";
        }*/
    }
    void p18()
    {
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
            std::cout << "Nada mas uno es primo \n";
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
        }
    }
    void p20(){
        int n[3];
        std::cout << "Dime 3 numeros i te digo si cumplen la funcion x2 = x1 % x0\n";
        for(int i = 0; i < 3; i++){
            std::cout << "x" << i << " = ";
            std::cin >> n[i];
        }
        if(n[2] == n[0]%n[1] ){
            std::cout << "La funcion es correcta ya que da  " << n[0]%n[1] << "Como digiste en x0" << n[2];
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
            std::cout << "Introduce los lados del triangulo ....";
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
    void p22(){
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
    void p25(){
        int n[2];
        std::cout << "Quanto cobras en bruto\n";
        std::cin >> n[0];
        std::cout << "Quantos anyos llevas en la empresa\n";
        std::cin >> n[1];
        std::cout << "Tu sueldo neto es ... "<< cnet(n[1], n[0]);
    }
int main(int argc, char** argv) {
    //El documento para realizar todo esta : /home/prog/Descargas/3._Ejercicios_Condicionales.pdf
//p1();//Numero primoo no primo.
    //p2(); // Par o impar
    // p3(); //dias de la setmana
    // p4(); // Meses
     p5(); //orden de los numeros Este lo hare con arrays.
    //p8();  //Este es para los numeros si son positivos o negaticos. 
    // p9(); // Este es para escribir una sola letra. Revisar al pasarlo todo a limpio
    // p10(); //Mayor o menor que 100.
    // p11(); //Le falta saber operar con caracteres.
    // p12(); // El error de caracteres esta en l == a;
    // p13(); // tres numeros i que te diga si son en orden creciente ...
    // p14(); //Son 10 numeros i tengo que dicir cual es el mayor i cual es el menor le falta saber cual es el maximo de caracteres de int.
    // p15(); //Funcion de suma i comprovacion .... 
    // p16(); //menu
     // p17(); // numeros del 1 al 5 tengo que revisar el codigo revisado
    // p18(); //Dos numeros pares lo son los dos.
    // p19(); //Que tome tres números y diga si la multiplicación de los dos primeros es igual al tercero.
    //p20(); //Que tome tres números y diga si el tercero es el resto de la división de los dos primeros
    // p21(); //Que muestre un menú donde las opciones sean “Equilátero”, “Isósceles” y “Escaleno”, pida una opción y calcule el perímetro del triángulo seleccionado
    // p22();// Que pase de Kg a otra unidad de medida de masa, mostrar en pantalla un menú con la ones posibles
    // p23(); // El sueldo neto.
    //p25();
    
    std::cout << "\nFin del progras de pruevas de c++\n";
    return 0;
}

