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
    void ingredientes(int c){
        aux[aux] = c;
        aux++;
        std::cout << "  " << aux << "  " << cali;
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
    gazpacho.ingredientes(salmon.cal());
    gazpacho.ingredientes(lechuga.cal());
    return 0;
}

