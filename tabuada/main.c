// Owner: Costa
// Exercise: tabuada
// Created in 21/01/2018 15:13:14

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef long long int Integer;


int main(){

    int n = 0;

    scanf("%d", &n);


    int i = 1;
    for(; i <= 10; i++){
        printf("%d x %d = %d\n", i, n, i*n);
    }

    return 0;
}
