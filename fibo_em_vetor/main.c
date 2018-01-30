// Owner: Costa
// Exercise: fibo_em_vetor
// Created in 29/01/2018 11:08:14

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef long long int Integer;

Integer f[100];

Integer fibon(int i){

    if(i == 0){
        return f[0];
    }

    if(f[i] != 0){
        return f[i];
    }

    Integer r = fibon(i-1) + fibon(i-2);
    f[i] = r;

    return r;
}


int main(){

    memset(f, 0, sizeof(f[0])*100 );

    f[0] = 0;
    f[1] = 1;
    f[2] = 1;
    f[3] = 2;
    f[4] = 3;
    f[5] = 5;

    int n = 0;

    scanf("%d", &n);

    int i = 0;
    for(; i < n; i++){
        int k = 0;
        scanf("%d", &k);

        printf("Fib(%d) = %lld\n", k, fibon(k) );
    }

    return 0;
}
