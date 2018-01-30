// Owner: Costa
// Exercise: og
// Created in 21/01/2018 15:07:28

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef long long int Integer;


int main(){

    int r = 1;
    int l = 1;

    while(r != 0 && l != 0){

        scanf("%d %d", &r, &l);

        if(r != 0 && l != 0){
            printf("%d\n", r + l);
        }
    }

    return 0;
}
