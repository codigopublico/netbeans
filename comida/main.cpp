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
    string estado[] ={"frito", "comido", "pelado", "asado", "crudo" };
    std::cout << "El alimento esta " << estado[a] << "\n";
}
class alimentos{
public:
    int aux[4];
    int ii;
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
    
};
class salmon : public pescados{
    
};
class atun : public pescados{
    
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
    
};
class espinacas : public verduras{
    
};
class ternera : public carnes{
    
};
int main(int argc, char** argv) {
    verduras prueva;
    prueva.iniciar();
    prueva.estados();
    prueva.frie();
    prueva.estados();
}

