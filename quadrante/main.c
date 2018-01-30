// Owner: Costa
// Exercise: quadrante
// Created in 09/01/2018 12:47:51

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double x,y;

    scanf("%lf %lf", &x, &y);

    if(x == 0.0 && y == 0.0){
        printf("Origem\n");
        return 0;
    }

    if(x == 0.0 || y == 0.0){
        if(x != 0.0){
            printf("Eixo X\n");
        }else{
            printf("Eixo Y\n");
        }
        return 0;
    }

    if(x > 0){
        if(y > 0){
            printf("Q1\n");
        }else{
            printf("Q4\n");
        }
    }else{
        if(y > 0){
            printf("Q2\n");
        }else{
            printf("Q3\n");
        }
    }

    return 0;
}
