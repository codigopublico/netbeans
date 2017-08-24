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
    void ingredientes(int p2, int p){
        aux2[aux] = p2;
        std::cout << "  " << aux << "  " << aux2[aux] << "\n";
        al[aux] = p;
        aux++;
        
    }
    void personas(int a){
            int cal = 20;
            int aux3 = 0;
            cal = cal * a;
            cal = cal /aux;
            std::cout << cal << " " << aux2[0] << "\n";
            for(int i = 0; i < aux; i++){
                while(aux2[i] < cal){
                    aux3++;
                    aux2[i] = aux2[i] * 2;
            }
                aux2[i] = aux3;
                aux3 = 0;
            }
            for(int i = 0; i < aux; i++){
                std::cout << "ingredientes "  << i << "cantidad " << aux2[i] << " " << al[i] << "\n";
            }
    }
    void Tiempo(){
        
    }   
private:
    int al[9];
    int aux = 0;
    int aux2[9];
    int id2[9];
};
int main(int argc, char** argv) {
    pescados salmon;
    salmon.iniciar();
    verduras lechuga;
    lechuga.iniciar();
    //inicializado los alimentos.
    recetas gazpacho;
    gazpacho.iniciar();
    gazpacho.ingredientes(lechuga.cal(), lechuga.id());//aqui tiene que retornar un puntero a un array
    gazpacho.ingredientes(salmon.cal(), salmon.id());
    gazpacho.personas(20);
    return 0;
}

