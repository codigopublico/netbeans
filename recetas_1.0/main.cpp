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
        aux2[aux] = c;
        std::cout << "  " << aux << "  " << aux2[aux] << "\n";
        aux++;
    }
    void personas(int a){
            aux = aux + 1;
            int cal = 20;
            int aux3 = 0;
            cal = cal * a;
            cal = cal /aux;
            for(int i = 0; i < aux; i++){
                while(aux2[i] > cal){
                    aux2[i] = aux2[i] * 2;
                    aux3++;
            }
                aux2[i] = aux3;
                aux3 = 0;
            }
            for(int i = 0; i < aux; i++){
                std::cout << "aux3: " << aux2[i] << "\n";
            }
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
    recetas gazpacho;
    gazpacho.ingredientes(lechuga.cal());
    gazpacho.ingredientes(salmon.cal());
    gazpacho.personas(20);
    return 0;
}

