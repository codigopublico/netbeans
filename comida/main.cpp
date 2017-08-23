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
    int estado = 5;
    //propiedades del alimento
    int prot;
    int gras;
    int hidra;
    int cali;
    void frie(){
        
    }
    void asa(){
        
    }
    void come(){
        
    }
    void pela(){
       
    }
    void estados(){
        std::cout << "Tiene " << prot << " proteinas \n";
        impestados(estado);
    }
private:
    int aux;
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
    int prot = 0;
    int gras = 0;
    int hidra = 0;
    int cali = 0;
};
class merluza : public pescados{
    
};
class salmon : public pescados{
    
};
class atun : public pescados{
    
};
class verduras : public alimentos{
public:
    int prot = 0;
    int gras = 0;
    int hidra = 0;
    int cali = 0;
};
class judias : public verduras{
    
};
class espinacas : public verduras{
    
};
class ternera : public carnes{
    
};
int main(int argc, char** argv) {
    judias nada;
    nada.estado();
    return 0;
}
int main(int argc, char** argv) {
    alimentos prueva;
    prueva.estados();
}

