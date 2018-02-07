// Owner: Costa
// Exercise: fibonacci_quantas_chamadas
// Created in 07/02/2018 19:08:08

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

typedef long long int Integer;
#define T 100000
#define true 1
#define false 0


int count = 0;

Integer fibon(int i){

    count += 1;

    if(i == 0){
        return 0;
    }

    if(i == 1){
        return 1;
    }

    Integer r = fibon(i-1) + fibon(i-2);

    return r;
}

int main(){

    int n = 0;

    scanf("%d", &n);

    while( n > 0 ){

        count = 0;

        int k = 0;
        scanf("%d", &k);

        Integer rt = fibon(k);

        printf("fib(%d) = %d calls = %lld\n", k, count-1, rt);

        n--;
    }

    return 0;
}
