// Owner: Costa
// Exercise: area
// Created in 08/01/2018 17:58:54

#include <stdio.h>
#include <stdlib.h>

int main(){

    double a,b,c;
    double pi = 3.14159;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    printf("TRIANGULO: %.3lf\n", (a*c)/2);
    printf("CIRCULO: %.3lf\n", pi*c*c);
    printf("TRAPEZIO: %.3lf\n", (c * (a + b) )/2);
    printf("QUADRADO: %.3lf\n", b*b);
    printf("RETANGULO: %.3lf\n", a*b);

    return 0;
}
