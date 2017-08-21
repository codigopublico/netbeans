/* 
 * File:   main.cpp
 * Author: prog
 *
 * Created on 2 de agosto de 2017, 13:23
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */ 
void p1()
{
    std::cout << "Calulo rectangulo ......" << "\n ";
    int b, a, res;
    std::cout << "altura " << "\n";
    std::cin >> a;
    std::cout <<  "base " << "\n";
    std::cin >> b; 
    std::cout << "\n area: " << b * a;
    std::cout << " \n perimetro: " << 2 * (b + a);
}
void p2()
{

}
int main(int argc, char** argv) {
    // p1(); //rectangulo
    p2();

    return 0;
}

