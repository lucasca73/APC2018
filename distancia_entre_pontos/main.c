// Owner: Costa
// Exercise: distancia_entre_pontos
// Created in 09/01/2018 19:18:43

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double x1, y1, x2, y2;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    double x = x1 - x2;
    double y = y1 - y2;

    double result = sqrt(x*x + y*y);

    printf("%.4lf\n", result);

    return 0;
}
