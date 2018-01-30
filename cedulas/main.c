// Owner: Costa
// Exercise: cedulas
// Created in 08/01/2018 18:16:17

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int coins = 0;
    int types[] = {100, 50, 20, 10, 5, 2, 1};

    scanf("%d", &coins);

    printf("%d\n", coins);

    int i = 0;
    while(i<7){
        int type = types[i];
        int amount = floor(coins/type);
        coins -= type*amount;
        printf("%d nota(s) de R$ %d,00\n", amount, type);
        i += 1;
    }

    return 0;
}
