/* 
 * File:   main.cpp
 * Author: prog
 *
 * Created on 14 de agosto de 2017, 19:49
 */
#include <cstdlib>
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

/*
 * 
 */
class alimentos{
public:
    string estado[5] = [ "firto", "asado", "comido", "pelado", "crudo"];
    //propiedades del alimento
    int prot = 0;
    int gras = 0;
    int hidra = 0;
    int cali = 0;
    void frie(){
        
    }
    void asa(){
        
    }
    void come(){
        
    }
    void pela(){
       
    }
    void estado(){
        std::cout << "Tiene " << prot << " proteinas \n";
        std::cout << "La patata esta " << estado[5] << "\n";
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

