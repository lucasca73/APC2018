// Owner: Costa
// Exercise: bilhetes_falsos
// Created in 29/01/2018 11:29:03

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


#define T 20000
int bils[T];


int main(){

    while(1){

        memset(bils, 0, sizeof(bils[0])*T );
        
        int count = 0;
        int a, b;
        scanf("%d %d ", &a, &b);

        if (a == b && a == 0) break;

        int value = 0;

        int i = 0;
        for(; i < b; i++){
            scanf("%d", &value);
            bils[value-1] += 1;
        }

        for(i = 0; i < a; i++){
            if (bils[i] > 1){
                count += 1;
            }
        }

        printf("%d\n", count);

    }    

    return 0;
}
