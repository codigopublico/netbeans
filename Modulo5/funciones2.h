/* 
 * File:   funciones2.h
 * Author: prog
 *
 * Created on 7 de agosto de 2017, 16:31
 */


#define	FUNCIONES2_H

#ifdef	__cplusplus
extern "C" {
#endif
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
int autosum(int n[], int a){
    int sum = 0;
    for(int i = 0; i < a; i++){
        sum = sum + n[i];
    }
    return sum;
}
int min(int n[], int a){
    int max = 99999999;
    for(int i = 0; i < a; i++){
        if(max > n[i]){
            max = n[i];
        }
    }
    return max;
}
int pot(int n[]){
    //este es para hacer potencias el primero del array es para hacer la base.
    int aux = 1;
    for(int i = 0; i < n[1]; i++){
        aux = aux * n[0];
    }
    return aux;
}
#ifdef	__cplusplus
}
#endif

#endif	/* FUNCIONES2_H */

