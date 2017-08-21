/* 
 * File:   main.cpp
 * Author: prog
 *
 * Created on 14 de agosto de 2017, 19:29
 */

#include <cstdlib>
#include <string>
#include <iostream>
#include <string.h>

using namespace std;

/* void getnom(){
        //Tengo que quitarla a ver como va .....
        std::cout << nom << "\n";
    }
 * 
 */
class persona{
public:
    string nom;
    int peso;
    int alt;
    string dire;
    void setnom(string n){
        nom = n;
    }
    void setpes(int pes){
        peso = pes;
        
    }
    void setdir(string dir){
        dire = dir;
    }
    void setalt(int al){
        alt = al;
        
    }
    void datos(){
        std::cout << "El nombre del sujeto es " << nom << "\n ";
        std::cout << "El peso es de " << peso << "\n";
        std::cout << "Su altura es de " << alt <<  "cm  \n";
        std::cout << "I su dirreccion es " << dire << "\n";
    }
};
int main(int argc, char** argv) {
    persona alex;
    alex.setnom("Alex");
    alex.setdir("Ripoll");
    alex.setpes(60);
    alex.setalt(200);
    alex.datos();
    return 0;
}

