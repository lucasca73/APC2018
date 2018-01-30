// Owner: Costa
// Exercise: numeros_positivos
// Created in 10/01/2018 10:13:24

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int count = 0;
    int i = 0;
    while(i < 6){
        double n;
        scanf("%lf", &n);
        count += n >= 0? 1:0;
        i++;
    }

    printf("%d valores positivos\n", count);

    return 0;
}
