/* 
 * File:   main.cpp
 * Author: prog
 *
 * Created on 1 de agosto de 2017, 13:57
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */

void p1()
{
int conta = 100;
    while (conta > 0)
    {
        conta--;
        std::cout << "No lanzare bolitas de papel al profsor  " << conta << "\n" ; 
    
    }
}
void p2_1()
{
int cont = 100;
    while (cont > 0)
    {
        cont--;
        std::cout << "Cuidado no descontarse, voy por la iteracion numero ... " << cont << "\n";
    }
}
void p2_2()
{
int cont = 100;
    do
    {
        cont--;
        std::cout << "Voy por el numero cuidado no perderse  " << cont << "\n ";
    
    
    }while(cont > 0);
}
void p2_3()
{
  for (int cont = 100; cont >= 0; cont--){
        std::cout <<  "Esto es un bucle for " << cont  <<"\n";
    
    }
    std::cout << "Termine de contar";
}
void tablas(){
    int numero, i, res;
    std::cout << "Que tabla de multiplicar quieres.";
    std::cin >> numero;
    for (i=10; i > 0; i--)
    {
        res = i * numero;
        std:cout << numero << " * "  << i << " = " << res << "\n"; 
        
    }
}
void multi(){
    int n1, n2, i, res;
    std::cout << "introduce el primer numero \n";
    std::cin >> n1;
    std::cout << "\n Introduce el segundo numero \n";
    std::cin >> n2;
    i = 0;
    res = 0;
    while(i<n2){
        res = res + n1;
        i++;
    }
    std::cout << "El resultado es ... " << res;
}
void p5()
{
    int num, i, b, res;
    std::cout << "Dime un numero \n";
    std::cin >> num;
    b = num;
    for(i=0; i < 5; i++){
        b++;
        res = b * num;
        std::cout << num << " * " << b << " = " << res<< "\n";
    
    }

}
void p6()
{
    int n;
    int res = 0;
    int i = 1;
    std::cout << "Escribe un numero ..... \n";
    std::cin >> n;
    while( i<=n)
    {
        res = res + (i * i);
        std::cout << " El bucle va dando ...." << res << "\n";
        i++;
    
    }
    std::cout << "El resultado es el siguiente ... " << res << "\n";
}
void p7()
{
    int n;
    int i = 10;
    do{
        std::cout << "Introduce un numero, pero que no sea negativo ... \n";
        std::cin >> n;
        std::cout << "Te faltan ... " << i << "\n";
        i--;
    }while(i>0 && n > 0);
    if (n < 0)
    {
        std::cout << "Tio escribiste un numero negativo" << "\n"; 
    
    }


}
void p8()
{
    int n;
    int i = 10;
    int sum = 0;
    int res;
    do{
        std::cout << "Introduce un numero, pero que no sea negativo ... \n";
        std::cin >> n;
        std::cout << "Te faltan ... " << i << "\n";
        i--;
        sum = sum + n;
    }while(i>0 && n > 0);
    if (n < 0)
    {
        std::cout << "Tio escribiste un numero negativo" << "\n"; 
    
    }
    res = 10 - i;
    res = sum/res;
    std::cout << "El resultado es " << res << "\n";
}
void p9()
{
    int n1, n2, res, i;
    res = 0;
    std::cout << "Introduce un numero ";
    std::cin >> n1;
    std::cout << "Introduce otro numero ";
    std::cin >> n2;
    if(n1 < n2){
        i = n1;
        while(i < n2 && i !=n2){
            i++; 
            res = res + i;
        }
    }res = res - n2;
    std::cout << "El resultado es ..." << res << "\n";
}
void p10()
{
    int x, n;
    std::cout << "Escribe un numero de 100 a 0 \n";
    std::cin >> n;
    do
    {
        std::cout << "Prueva a ver si hacertas el numero ...";
        std::cin >> x;
        if (n > x)
        {
            std::cout << "\n El numero es mayor del que diguiste\n";
        }
        if (n < x)
        {
            std::cout << "\n El numero es menor del que diguiste \n";
                    
        }
        if (n == x)
        {
            std::cout << "Felicitaciones !!!!";
        }
    
    }while(x != n && n > 0);

}
void p11()
{
    int e = 5;
    while(e != 0){
 int x, n;
    std::cout << "Escribe un numero de 100 a 0 \n";
    std::cin >> n;
    do
    {
        std::cout << "Prueva a ver si hacertas el numero ... \n";
        std::cin >> x;
        std::cout << "Si quieres terminar escribe 0 \n";
        std::cin >> e;
        if (n > x)
        {
            std::cout << "\n El numero es mayor del que diguiste\n";
        }
        if (n < x)
        {
            std::cout << "\n El numero es menor del que diguiste \n";
                    
        }
        if (n == x)
        {
            std::cout << "Felicitaciones !!!!";
        }
    
    }while(x != n && n > 0 && e != 0);
    std::cout << "Saliste del programa \n";
    }

}
int esprimo(int n)
{
    int es=1;
    for(int i = 2; i < n; i++){
        if (n%i==0){
            es=0;
            break;
        }
        
    }
    return es;
}
void p12()
{
    for(int i = 1; i < 1000; i++ ){
        if (esprimo(i)){
            std::cout << i << " "; 
        }
    
    }
}
void p13()
{
    int n, max;
    n = 2;
    while(n >= 0)
    {
        std::cout << "Introduce un numero ...(para salir numero negativo)\n";
        std::cin >> n;
        if(n > max){
            max = n;
        }
        std::cout << "El maximo es ..." << max << "\n";
    }
}
int esmultiplo(int i, int n)
{
    int es=0;
    if(i%n==0)
    {
        es=1;
        return es;
    }else
    return es;
}
void p14()
{
    int n1;
    int n2 = 2;
    std::cout << "Dime un numero \n ";
    std::cin >> n1;
    std::cout << "Los numeros multiplos comprendidos entre 1 i " << n1 << " de " << n2 << " \n";
    for(int i = 0; i < n1; i++)
    {
        if(esmultiplo(i, n2))
        {
            std::cout << i << "  ";
        }
    }
}
int main(int argc, char** argv) {
    //Descomentar para ejecutar.
    // p1();//bolitas de papel.
    // p2_1();  //Bucles .... hasta que se acabe el prefijo p2.
    // p2_2();
    // p2_3();
    //Es faltan todos lo de atras de las tablas.
    //tablas();//Muestra las tablas de multiplicar. 
    //multi(); //multiplica dos numeros usando como base la suma.
    // p5();// Concatenacion 
    // p6(); //Conquetanacion en elevados.
    // p7(); //interaciones de datos.
    //p8(); Media de las interaciones de datos.
    //p9(); //Bucle de interaciones...
    //p10(); //Bucle de adivinaza
    // p11(); // BUcle que se sale del programa 
    // p12(); //numeros primos
    // p13(); //maximos i minimos.
    // p14(); //maximos i minimos
    
}

