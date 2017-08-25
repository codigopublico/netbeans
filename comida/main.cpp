/* 
 * File:   main.cpp
 * Author: prog
 *
 * Created on 23 de agosto de 2017, 14:55
 */

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
class alimentos{
public:
    int aux[4];
    int ii;
    int pre;
    int canti;
    //propiedades del alimento
    int prot;
    int gras;
    int hidra;
    int cali;
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
     void iniciar(){
    prot = 0;
    gras = 0;
    hidra = 0;
    cali = 0;
    for(int i = 0; i < 5; i++) {
        aux[i] = 0;
    }
    void comprar(){
        return c * pre;
        
    }
    void cantidad(int c){
        canti = c;
    }
    }

};
class Gisantes : public alimentos{

};
class carnes : public alimentos{
public:
    int prot = 0;
    int gras = 0;
    int hidra = 0;
    int cali = 0;
};
class buey : public carnes{
    
};
class pescados : public alimentos{
public:
    void iniciar(){
    prot = 0;
    gras = 0;
    hidra = 0;
    cali = 0;
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
    cali = 0;
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
    cali = 0;
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
int main(int argc, char** argv) {
    verduras prueva;
    prueva.iniciar();
    prueva.estados();
    prueva.frie();
    prueva.estados();
    buey cabeza;
    cabeza.iniciar();
    cabeza.asa();
    cabeza.frie();
    cabeza.estados();
    Kiwi kiwi1;
    kiwi1.iniciar();
    kiwi1.estados();
}

