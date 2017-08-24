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
        aux2[au] = *p;
        p++;
        al[au] = *p;
        std::cout << "El igrediente que pusiste es :  " << alimento[*p] << "\n";
        au++;
        
    }
    void personas(int a){
            int cal = 20;
            int aux3 = 0;
            cal = cal * a;
            cal = cal /au;
            for(int i = 0; i < au; i++){
                while(aux2[i] < cal){
                    aux3++;
                    aux2[i] = aux2[i] * 2;
            }
                aux2[i] = aux3;
                aux3 = 0;
            }
            for(int i = 0; i < au; i++){
                std::cout << "ingredientes " << alimento[al[i]]  << " cantidad " << aux2[i] << " "  << "\n";//ponerle el nombre de los igredientes
                
            }
    }
    void Tiempo(int a){
        std::cout << "El tiempo de preparacion es " << a;
    }   
private:
    int al[9];
    int au = 0;
    int aux2[9];
    int id2[9];
};
void p1(){
    pescados salmon;
    salmon.iniciar();
    verduras lechuga;
    lechuga.iniciar();
    //inicializado los alimentos.
    recetas gazpacho;
    gazpacho.iniciar();
    gazpacho.ingredientes(lechuga.cal());//aqui tiene que retornar un puntero a un array
    gazpacho.ingredientes(salmon.cal());
    gazpacho.personas(20);
}
void p2(){
    int a[20];
    std::cout << "Dime que el numero de  aliemento que  quieres tienes estos para escojer(para salir 0): ";
    for(int i = 0; i < 7; i++){
        std::cout << alimento[i] << "  " << i;
    }
    std::cout << "\n";
    for(int i = 0;  a[i] != 0; i++){
        std::cin >> a[i];
    }
    for(int ii = 0; a[ii] != 0; ii++){
        std::cout << a[ii] << "  ";
    }
    
    
}
int main(int argc, char** argv) {
    //p1();
    p2();
    return 0;
}

