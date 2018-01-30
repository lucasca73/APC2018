// Owner: Costa
// Exercise: quadrante_pares
// Created in 18/01/2018 10:21:07

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//%llu
typedef unsigned long long Real;

int main(){

    Real n;

    scanf("%llu", &n);

    Real i = 1;

    while(i <= n){

        if( i%2 == 0 ){
            printf("%llu^2 = %llu\n", i, i*i);
        }

        i++;
    }

    return 0;
}
