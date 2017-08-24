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
    void ingredientes(int *p){
        std::cout << "00000" << "\n";
        aux2[au] = *p;
         std::cout << "00000" << "\n";
        std::cout << "  " << au << "  " << aux2[au] << "\n";
         std::cout << "00000" << "\n";
        p++;
         std::cout << "00000" << "\n";
        al[au] = *p;
         std::cout << "00000" << "\n";
        //std::cout << "al[aux]  "  << al[aux] << " aux2[aux] " << aux2[aux] << "\n";
         std::cout << "00000" << "\n";
        au++;
        
    }
    void personas(int a){
            int cal = 20;
            int aux3 = 0;
            cal = cal * a;
            cal = cal /au;
            std::cout << cal << " " << aux2[0] << "\n";
            for(int i = 0; i < au; i++){
                while(aux2[i] < cal){
                    aux3++;
                    aux2[i] = aux2[i] * 2;
            }
                aux2[i] = aux3;
                aux3 = 0;
            }
            for(int i = 0; i < au; i++){
                std::cout << "ingredientes "   << "cantidad " << aux2[i] << " " << al[i] << "\n";
            }
    }
    void Tiempo(){
        
    }   
private:
    int al[9];
    int au;
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
    //gazpacho.ingredientes(lechuga.cal());//aqui tiene que retornar un puntero a un array
    //gazpacho.ingredientes(salmon.cal());
    gazpacho.personas(20);
    return 0;
}

