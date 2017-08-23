/* 
 * File:   main.cpp
 * Author: prog
 *
 * Created on 23 de agosto de 2017, 16:11
 */

#include <cstdlib>
#include "comida.hpp"

using namespace std;

/*
 * 
 */
class recetas : public alimentos{
public:
    int c;
    void ingredientes(int c){
        aux2[aux] = c;
        aux++;
        std::cout << "  " << aux << "  " << aux2[aux];
    }
    void personas(int a){
       
    }
    void Tiempo(){
        
    }   
private:
    int aux = 0;
    int aux2[9];
};
int main(int argc, char** argv) {
    pescados salmon;
    salmon.iniciar();
    verduras lechuga;
    lechuga.iniciar();
    recetas gazpacho();
    gazpacho.ingredientes(5);
    gazpacho.ingredientes(10);
    return 0;
}

