// Owner: Costa
// Exercise: soma_impares
// Created in 18/01/2018 10:58:28

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef long long int Integer;


int main(){

    int x = 0;
    int y = 0;
    int aux = 0;

    scanf("%d", &x);
    scanf("%d", &y);

    if(x > y){
        aux = y;
        y = x;
        x = aux;
    }
    
    int r = 0;
    //printf("%d %d\n", x, y); 

    int i = 0;
    for(i = x+1; i < y; i++){

        if(i%2 != 0){
            //printf("(%d) ", i);
            r += i;
        }
    }

    printf("%d\n", r);

    return 0;
}
