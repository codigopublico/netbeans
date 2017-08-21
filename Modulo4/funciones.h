/* 
 * File:   funiones.h
 * Author: prog
 *
 * Created on 2 de agosto de 2017, 15:06
 */
#ifndef FUNCIONES_H
#define	FUNCIONES_H
#ifdef	__cplusplus
extern "C" {
#endif
#include <iostream>
#include <string.h>
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
int espar(int n)
{
    int es=0;
    if (n%2 == 0)
    {
        es = 1;
    }return es;
}
int naff(int n)
{ //esta es la funcion para decir si es possitivo o negativo.
    int es = 1;
    if (n > 0)
    {
        es = 0;
    }
return es;
}
#ifdef	__cplusplus
int factor(int n){
    int fact = 1;
    for(int i = 0; i < n; i++){
        fact = fact * n;
    }
    return fact;
}
int media(int n[], int n2){
    int sum = 0;
    for(int i = 0; i < n2; i++){
        sum = sum + n[i];
    }
    return sum/n2;
}
int max(int n[], int a){
    int max = 0;
    for(int i = 0; i < a; i++){
        if(max < n[i]){
            max = n[i];
        }
    }
    return max;
}
int sumpor(int n, int p){
    return n + (n*p)/100;
    
}
}

#endif

#endif	/* FUNCIONES_H */