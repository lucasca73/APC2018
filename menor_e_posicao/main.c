// Owner: Costa
// Exercise: menor_e_posicao
// Created in 24/01/2018 12:37:21

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef long long int Integer;

int vec[1001];

int main(){

    int n = 0;

    scanf("%d", &n);

    int i = 0;
    for(; i < n; i++){
        scanf("%d", &(vec[i]) );
    }


    int minor = 1000000;
    int index = 0;
    i = 0;
    for(; i < n; i++){
        if(vec[i] < minor){
            minor = vec[i];
            index = i;
        }
    }


    printf("Menor valor: %d\nPosicao: %d\n", minor, index);    

    return 0;
}
