/* 
 * File:   main.cpp
 * Author: prog
 *
 * Created on 3 de agosto de 2017, 11:29
 * Para hacer los calculos se ha de poner el 0 negativo lo que es 0 tiene que ser -1...........
 */  
#include <cstdlib>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
using namespace std;

/*
 * Este es un programa que simula dos neuronas.float alpha = aprendizaje[rand() % 9];
 */
int Perceptron(){
	srand(time(NULL));
	float intervalos[] = {-0.98,-0.876,-0.654,-0.754,0.453,0.953,-0.322,-0.298,-0.11,-0.065,0.0234,0.232,0.2335,0.4674,0.675,0.7883, 0.752,0.823,0.9876};
	float aprendizaje[] = {0.0234,0.232,0.2335,0.4674,0.675,0.7883, 0.752,0.823,0.9876};
	float Umbral,defumbral;
	int i;
	int x1[5]; 
	int x2[5];
	int result[5];
        int aux;
        for (int i = 0; i < 5; i++)
        {
            x1[i] = rand() % 2;
            x2[i] = rand() % 2;
            result[i] = rand() % 2;
            std::cout << result[i];
        }
	float w[2] = {intervalos[rand() % 18],intervalos[rand() % 18]};
	float alpha = aprendizaje[rand() % 9];
	Umbral = intervalos[rand() % 18];
	defumbral = 1;
	int verdad = 0;
	int op;
	int cont = 0;
	int n = 0;
        aux = 100;
        std::cout << "\n------------------inicio del programa --------------------------------\n";
        for(int i = 0; i < 5; i++){
            printf("\n[*] Entradas: (%2i,%2i) --> Salida: %2i",x1[i],x2[i], result[i]);
            if(x1[i] == 0){
                x1[i] = -1;
            }
            if(x2[i] == 0){
                x2[i] = -1;
            }
        }
//////////// ENTRENAMIENTO DEL PERCEPTRON;
	while(verdad == 0){
            cont = 0;
		n++;
		for(int i=0;i<5;i++){
			op = ((x1[i]*w[0])+(x2[i]*w[1])) + (defumbral*Umbral);
			if(op >= 0){
				op = 1;
			}
			else{
				op = 0;
			}
			if(op != result[i]){
				w[0] = w[0] + (2*alpha)*(x1[i]*result[i]);
				w[1] = w[1] + (2*alpha)*(x2[i]*result[i]);
				Umbral = Umbral + (2*alpha)*(defumbral*result[i]);
			}
		}
		for(int i=0;i<5;i++){
			op = ((x1[i]*w[0])+(x2[i]*w[1])) + (defumbral*Umbral);
                        if(op >= 0){
				op = 1;
			}
			else{
				op = 0;
			}
			if(op == result[i]){
				cont++;
			}
                }
			if(cont > 2){
				verdad = 1;
			}
		
		if(n > aux){
                    aux++;
                        float w[2] = {intervalos[rand() % 18],intervalos[rand() % 18]};
			float alpha = aprendizaje[rand() % 9];
                        n = 0;
		}
	}
/////////// MOSTRAR RESULTADOS FINALES
        aux = aux - 100;
	printf("\n[*] FINALIZANDO ENTRENAMIENTO...\n");
	printf("[*] PERCEPTRON SIMPLE [ENTRENADO]\n");
	printf("\n--------------- DATOS FINALES --------------------------------\n\n");
	printf("[*] Total de epocas: (%i, %i)\n",n,aux);
	printf("[*] Peso Sinaptico 1 w[1]\t\t--> %2.2f\n",w[0]);
	printf("[*] Peso Sinaptico 2 w[2]\t\t--> %2.2f\n",w[1]);
	printf("[*] Umbral(Polarizacion)\t\t--> %2.2f\n",Umbral);
	printf("\n\n--------------- VERFICIACION DE ENTRENAMIENTO ------------------\n\n");
        printf("La entradadevira ser .....");
        for(int i = 0; i < 5; i++){
            printf("\n[*] Entradas: (%2i,%2i) --> Salida: %2i",x1[i],x2[i], result[i]);
        }
	for(int i = 0;i<5;i++){
		op = ((x1[i]*w[0])+(x2[i]*w[1])) + (defumbral*Umbral);
		if(op >= 0){
			op = 1;
		}
		if(op < 0){
			op = 0;
			}
                std::cout << "\nEntrada1 : " << x1[i] << " Entrada2: " << x2[i] << " Salida: " << op << "\n";
	}
        
}
int main(int argc, char** argv) {
    Perceptron();
    std::cout << "\n--------------Fin del programa -----------------"<< "\n";
    return 0;
}

