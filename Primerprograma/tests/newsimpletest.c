/*
 * File:   newsimpletest.c
 * Author: prog
 *
 * Created on 01-ago-2017, 13:01:38
 */

#include <stdio.h>
#include <stdlib.h>
#include "Calculadora.h"

/*
 * Simple C Test Suite
 */

void testCalculadora() {
    Calculadora calculadora;
    int result = calculadora.Calculadora();
    if (1 /*check result*/) {
        printf("%%TEST_FAILED%% time=0 testname=testCalculadora (newsimpletest) message=error message sample\n");
    }
}

void testRestar() {
    int a;
    int b;
    Calculadora calculadora;
    int result = calculadora.restar(a, b);
    if (1 /*check result*/) {
        printf("%%TEST_FAILED%% time=0 testname=testRestar (newsimpletest) message=error message sample\n");
    }
}

void testSumar() {
    int a;
    int b;
    Calculadora calculadora;
    int result = calculadora.sumar(a, b);
    if (1 /*check result*/) {
        printf("%%TEST_FAILED%% time=0 testname=testSumar (newsimpletest) message=error message sample\n");
    }
}

int main(int argc, char** argv) {
    printf("%%SUITE_STARTING%% newsimpletest\n");
    printf("%%SUITE_STARTED%%\n");

    printf("%%TEST_STARTED%%  testCalculadora (newsimpletest)\n");
    testCalculadora();
    printf("%%TEST_FINISHED%% time=0 testCalculadora (newsimpletest)\n");

    printf("%%TEST_STARTED%%  testRestar (newsimpletest)\n");
    testRestar();
    printf("%%TEST_FINISHED%% time=0 testRestar (newsimpletest)\n");

    printf("%%TEST_STARTED%%  testSumar (newsimpletest)\n");
    testSumar();
    printf("%%TEST_FINISHED%% time=0 testSumar (newsimpletest)\n");

    printf("%%SUITE_FINISHED%% time=0\n");

    return (EXIT_SUCCESS);
}
