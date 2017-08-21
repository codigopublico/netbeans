/*
 * File:   newsimpletest.c
 * Author: prog
 *
 * Created on 01-ago-2017, 10:24:10
 */

#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

/*
 * Simple C Test Suite
 */

void testCal() {
    int x;
    int y;
    int result = cal(x, y);
    if (1 /*check result*/) {
        printf("%%TEST_FAILED%% time=0 testname=testCal (newsimpletest) message=error message sample\n");
    }
}

int main(int argc, char** argv) {
    printf("%%SUITE_STARTING%% newsimpletest\n");
    printf("%%SUITE_STARTED%%\n");

    printf("%%TEST_STARTED%%  testCal (newsimpletest)\n");
    testCal();
    printf("%%TEST_FINISHED%% time=0 testCal (newsimpletest)\n");

    printf("%%SUITE_FINISHED%% time=0\n");

    return (EXIT_SUCCESS);
}
