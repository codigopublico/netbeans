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
int dias_set(int n){
/* //Aca hay un error. Parce que el problema es de las cabeceras. Tengo que ler el libro.
   char r[] = "Hola";
    if(n == 1){
        char r[] = "Lunes";
    }
    if(n == 2){
        char r[] = "martes";
    }
    if(n == 3){
       char r[] = "Miercoles";
    }
     if(n == 4){
        char r[] = "jueves";
    }
    if(n == 5){
       char r[] = "Viernes";
    }
    if(n == 6){
       char r[] = "Sabado";
    }
    if(n == 6){
       char r[] = "Domingo";
    }
     
    return r; */ 

}
/*int ordenar(int n[])
{
    int i = 3;
    int aux;
    while(n[0] <! n[1] && n[1] <! n[2])
    {
        if(n[0] <! n[1])
        {
            aux = n[0];
            n[0] = n[1];
            n[1] = aux;
        }
        if(n[1] <! n[2])
        {
            aux = n[1];
            n[1] = n[2];
            n[2] = aux;
        }
    }return n[2];
}*/
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

