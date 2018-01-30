// Owner: Costa
// Exercise: selecao_em_vetor
// Created in 30/01/2018 09:51:58

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(){

    int i = 0;
    for(; i < 100; i++){
        double a = 0;
        scanf("%lf", &a);
        if( a <= 10.0 ){
            printf("A[%d] = %.1lf\n", i, a);
        }
        
    }

    return 0;
}
