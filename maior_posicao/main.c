// Owner: Costa
// Exercise: maior_posicao
// Created in 18/01/2018 10:27:46

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef unsigned long long Real;

int main(){

    int n = 0;
    int i = 0;

    int aux = -1000000;
    int index = 0;


    while( scanf("%d", &n) != EOF ){

        if(n > aux){
            aux = n;
            index = i;
        }

        i++;
    }

    printf("%d\n%d\n", aux, index +1);

    return 0;
}
