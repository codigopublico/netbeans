/*
 * Calculadora.h
 *
 *  Created on: 10/11/2014
 *      Author: PROGRAMACION
 */

#ifndef CALCULADORA_H_
#define CALCULADORA_H_

class Calculadora {
public:
	Calculadora();
	virtual ~Calculadora();
	int sumar(int a, int b);
	int restar(int a, int b);
};

#endif /* CALCULADORA_H_ */
