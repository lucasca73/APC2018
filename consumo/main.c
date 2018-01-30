// Owner: Costa
// Exercise: consumo
// Created in 09/01/2018 19:12:21

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int distance;
    double fuel;

    scanf("%d", &distance);
    scanf("%lf", &fuel);

    printf("%.3lf km/l\n", (distance/fuel) );

    return 0;
}
