// Owner: Costa
// Exercise: desafio_bino
// Created in 18/01/2018 11:29:45

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef long long int Integer;

int range[] = {2, 3, 4, 5};
int value[] = {0, 0, 0, 0};


int main(){

    int n = 0;
    int number = 0;

    scanf("%d", &n);

    

    while( n > 0 ){

        scanf("%d", &number);

        int i = 0;
        for(i = 0; i < 4; i++){
            if( number%range[i] == 0 ){
                value[i] += 1;
            }
        }

        n--;

    }

    int i = 0;
    for(i = 0; i < 4; i++){
        printf("%d Multiplo(s) de %d\n", value[i], range[i]);
    }

    return 0;
}
