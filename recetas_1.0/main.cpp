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
    recetas gazpach;
    gazpach.iniciar();
    gazpach.ingredientes(lechuga.cal());//aqui tiene que retornar un puntero a un array
    gazpach.ingredientes(salmon.cal());
    gazpach.personas(20);
}
void p2(){
    int a[20];
    int p;
    std::cout << "Dime que el numero de  aliemento que  quieres tienes estos para escojer(para salir 50): ";
    std::cout << "Dime para cuantoas personas es la recestas: \n";
    std::cin >> p;
    for(int i = 0; i < 7; i++){
        std::cout << alimento[i] << "  " << i << "\n";
    }
    std::cout << "\n";
    int i = 0;
    do{
        std::cin >> a[i];
        i++;
        
    }while(a[i - 1] != -1);
    recetas gazpacho;
    gazpacho.iniciar(); //receta general
    for(int ii = 0; a[ii] != -1; ii++){
        std::cout << "Poniendo alimento   "  << alimento[a[ii]] << "  \n";
        //aqui estaran los futuros problemas......
        if(a[ii] == 0){
            carnes p1;
            p1.iniciar();
            gazpacho.ingredientes(p1.cal());
        }
        if(a[ii] == 1){
           pescados p2;
            p2.iniciar();
            gazpacho.ingredientes(p2.cal());
        }
        if(a[ii]  == 2){
            merluza p3;
            p3.iniciar();
            gazpacho.ingredientes(p3.cal());
        }
        if(a[ii]  == 3){
            salmon p4;
            p4.iniciar();
            gazpacho.ingredientes(p4.cal());
        }
        if(a[ii] == 4){
            atun p5;
            p5.iniciar();
            gazpacho.ingredientes(p5.cal());
            
        }
        if(a[ii]  == 5){
            buey p6;
            p6.iniciar();
            gazpacho.ingredientes(p6.cal());
        }
        if(a[ii]  == 6){
            verduras p7;
            p7.iniciar();
            gazpacho.ingredientes(p7.cal());
        }
    }
            gazpacho.personas(20);
    
}
int main(int argc, char** argv) {
    p1();
    p2();
    return 0;
}

