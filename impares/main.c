// Owner: Costa
// Exercise: impares
// Created in 18/01/2018 12:48:27

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef long long int Integer;


int main(){

    int n = 0;

    scanf("%d", &n);


    int i = 0;
    while(i <= n){

        if(i%2){
            printf("%d\n",i);
        }

        i++;
    }

    return 0;
}
