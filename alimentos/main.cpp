/* 
 * File:   main.cpp
 * Author: prog
 *
 * Created on 14 de agosto de 2017, 19:49
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
class alimentos{
public:
    int fri = 0;
    int asar = 0;
    int comer = 0;
    int pelar = 0;
    int prot = 0;
    int gras = 0;
    int hidra = 0;
    int cali = 0;
    void frie(){
        fri = 1;
    }
    void asa(){
        asar = 1;
    }
    void come(){
        comer = 1;
    }
    void pela(){
        pelar = 1;
    }
    void prop(int pro, int gra, int hid, int cal){
        prot = pro; gras = gra; hidra = hid; cali = cal;
        
    }
    void estado(){
        std::cout << "Tiene " << prot << " proteinas \n";
        std::cout << "La patata esta " << fri << "\n";
    }
};
int main(int argc, char** argv) {
    alimentos papa;
    papa.prop(20, 20, 10, 100);
    papa.estado();
    papa.frie();
    papa.estado();
    return 0;
}

