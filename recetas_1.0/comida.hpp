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
class alimentos{
public:
    int aux[4];
    int ii;
    //propiedades del alimento
    int prot;
    int gras;
    int hidra;
    int cali;
    int id;
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
    int cal(){
        int r[2];
        r[0] = cali;
        r[1] = id;
        return r[];
    }
     void iniciar(){
    prot = 0;
    gras = 0;
    hidra = 0;
    cali = 0;
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
    int prot = 0;
    int gras = 0;
    int hidra = 0;
    int cali = 0;
    }
};
class buey : public carnes{
    
};
class pescados : public alimentos{
public:
    void iniciar(){
    prot = 0;
    gras = 0;
    hidra = 0;
    cali = 10;
   }
};
class merluza : public pescados{
     void iniciar(){
    prot = 0;
    gras = 0;
    hidra = 0;
    cali = 0;
    for(int i = 0; i < 5; i++) {
        aux[i] = 0;
    }
    }
};
class salmon : public pescados{
     void iniciar(){
    prot = 0;
    gras = 0;
    hidra = 0;
    cali = 0;
    for(int i = 0; i < 5; i++) {
        aux[i] = 0;
    }
    }
};
class atun : public pescados{
     void iniciar(){
    prot = 0;
    gras = 0;
    hidra = 0;
    cali = 0;
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
    id = 2;
    for(int i = 0; i < 5; i++) {
        aux[i] = 0;
    }
    }
};
class judias : public verduras{
     void iniciar(){
    prot = 0;
    gras = 0;
    hidra = 0;
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
    cali = 0;
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
    cali = 0;
    for(int i = 0; i < 5; i++) {
        aux[i] = 0;
    }
    }
};
class cerdo : public carnes{
    
};
class sardina : public pescados{
    
};
class frutas : public alimentos{
    
};
class Kiwi : public frutas{
    
};
