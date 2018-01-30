// Owner: Costa
// Exercise: resto_2
// Created in 18/01/2018 11:16:09

#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(){

    int n = 0;

    scanf("%d", &n);

    int i = 0;
    for(i = 1; i <= 10000; i++){
        if(i%n == 2){
            printf("%d\n", i);
        }
    }

    return 0;
}
