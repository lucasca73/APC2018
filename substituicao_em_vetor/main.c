// Owner: Costa
// Exercise: substituicao_em_vetor
// Created in 24/01/2018 12:49:00

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef long long int Integer;

int vec[10];

int main(){


    int i = 0;
    for(; i < 10; i++){
        scanf("%d", &(vec[i]) );

        if(vec[i] <= 0 ){
            vec[i] = 1;
        }
    }

    i = 0;
    for(; i < 10; i++){
        printf("X[%d] = %d\n", i, vec[i]);
    }

    return 0;
}
