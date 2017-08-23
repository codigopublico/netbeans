/* 
 * File:   main.cpp
 * Author: prog
 *
 * Created on 23 de agosto de 2017, 14:42
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
class alimentos{
public:
    int estad[0][2];
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
    void estado(){
        int i = 1;
        std::cout << "Tiene " << prot << " proteinas \n";
        std::cout << "La patata esta " << estado[0][1] << "\n";
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

    return 0;
}

