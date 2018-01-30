// Owner: Costa
// Exercise: pro_habilidade
// Created in 15/01/2018 10:33:52

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define TAM 100
typedef unsigned long long Integer;
Integer values[TAM];

Integer mdc(Integer a, Integer b){
    return a == 0? b:mdc(b%a, a);
}

Integer coroa(int i){

    if(values[i] != 0){
        return values[i];
    }

    Integer r = coroa(i-1) + coroa(i-2);
    values[i] = r;

    return r;
}


int main(){

    Integer n;

    memset(values, 0, TAM*sizeof(values[0]));

    values[0] = 1;
    values[1] = 2;
    values[2] = 3;

    while(scanf("%llu", &n) != EOF ){

        Integer total = (1 << (n) );
        Integer c = coroa(n);
        Integer divisor = mdc(total, c);

        printf("%llu/%llu\n", c/divisor, total/divisor);
    }

    return 0;
}
