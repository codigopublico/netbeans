/* 
 * File:   funciones.h
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
}
#endif

#endif	/* FUNCIONES_H */