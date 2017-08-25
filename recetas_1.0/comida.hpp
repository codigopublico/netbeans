/* 
 * File:   comida.hpp
 * Author: prog
 *
 * Created on 23 de agosto de 2017, 16:19
 */

#ifndef COMIDA_HPP
#define	COMIDA_HPP



#endif	/* COMIDA_HPP */
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;

/*
 * 
 */
void impestados(int a){
    string estado[] ={"frito", "asado", "pelado", "comido", "crudo" };
    std::cout << "El alimento esta " << estado[a] << "\n";
}
string alimento[] ={"carnes", "pescados", "merluza", "salmon", "atun", "buey", "verduras"};
int r[2];
class alimentos{
public:
    int aux[4];
    int ii;
    //propiedades del alimento
    int prot;
    int gras;
    int hidra;
    int cali;
    int idi;
    void frie(){
        aux[0] = 1;
    }
    void asa(){
        aux[1] = 1;
    }
    void come(){
        aux[2] = 1;
    }
    void pela(){
        aux[3] = 1;
    }
    void estados(){
        std::cout << "Tiene " << prot << " proteinas \n";
        ii = 0;
        for(int i = 0; i < 4; i++){
            if(aux[i] == 1){
                impestados(i);
            }else{
                ii++;
            }
            if(ii == 4){
                impestados(ii);
                
            }
        }
    }
    int* cal(){
        int* p = new int[2];
        p[0] = cali;
        p[1] = idi;
        return p;//tomar este ejemplo para retornar arrays i cadenas de arrys.
    }
    int id(){
        return idi;
    }
     void iniciar(){
    prot = 0;
    gras = 0;
    hidra = 0;
    cali = 1;
    idi = 4;
    for(int i = 0; i < 5; i++) {
        aux[i] = 0;
    }
    }

};
class Gisantes : public alimentos{

};
class carnes : public alimentos{
public:
    void iniciar(){
    prot = 0;
    gras = 0;
    hidra = 0;
    cali = 2;
    idi = 0;
    }
};
class buey : public carnes{
public:
    void iniciar(){
    prot = 0;
    gras = 0;
    hidra = 0;
    cali = 10;
    idi = 5;
    for(int i = 0; i < 5; i++) {
        aux[i] = 0;
    }
   }
};
class pescados : public alimentos{
public:
    void iniciar(){
    prot = 0;
    gras = 0;
    hidra = 0;
    cali = 1;
    idi = 1;
    for(int i = 0; i < 5; i++) {
        aux[i] = 0;
    }
   }
};
class merluza : public pescados{
public:
     void iniciar(){
    prot = 0;
    gras = 0;
    hidra = 0;
    cali = 2;
    idi = 2;
    for(int i = 0; i < 5; i++) {
        aux[i] = 0;
    }
    }
};
class salmon : public pescados{
public:
     void iniciar(){
    prot = 0;
    gras = 0;
    hidra = 0;
    cali = 3;
    idi = 3;
    for(int i = 0; i < 5; i++) {
        aux[i] = 0;
    }
    }
};
class atun : public pescados{
public:
     void iniciar(){
    prot = 0;
    gras = 0;
    hidra = 0;
    cali = 4;
    idi = 4;
    for(int i = 0; i < 5; i++) {
        aux[i] = 0;
    }
    }
};
class verduras : public alimentos{
public:
    void iniciar(){
    prot = 0;
    gras = 0;
    hidra = 0;
    cali = 5;
    idi = 6;
    for(int i = 0; i < 5; i++) {
        aux[i] = 0;
    }
    }
};
class judias : public verduras{
     void iniciar(){
    prot = 0;
    gras = 0;
    hidra = 3;
    cali = 5;
    for(int i = 0; i < 5; i++) {
        aux[i] = 0;
    }
    }
};
class espinacas : public verduras{
     void iniciar(){
    prot = 0;
    gras = 0;
    hidra = 0;
    cali = 2;
    for(int i = 0; i < 5; i++) {
        aux[i] = 0;
    }
    }
};
class ternera : public carnes{
     void iniciar(){
    prot = 0;
    gras = 0;
    hidra = 0;
    cali = 2;
    for(int i = 0; i < 5; i++) {
        aux[i] = 0;
    }
    }
};
class cerdo : public carnes{
    
};
class sardina : public pescados{
    void iniciar(){
    idi = 1;
    cali = 3;
    }
};
class frutas : public alimentos{
    
};
class Kiwi : public frutas{
    
};
