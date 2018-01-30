// Owner: Costa
// Exercise: intervalo_2
// Created in 18/01/2018 10:41:50

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef long long int Integer;


int main(){

    Integer n;

    int i = 0;
    scanf("%d", &i);

    int in = 0;
    int out = 0;

    while(i > 0){
        scanf("%lld", &n);

        if( n >= 10 && n <= 20 ){
            in += 1;
        }else{
            out += 1;
        }

        i--;
    }

    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}
