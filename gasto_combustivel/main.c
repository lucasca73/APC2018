// Owner: Costa
// Exercise: gasto_combustivel
// Created in 11/01/2018 09:57:43

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double t, vel;

    scanf("%lf", &t);
    scanf("%lf", &vel);

    printf("%.3lf\n", (t * vel)/12.0 );

    return 0;
}
