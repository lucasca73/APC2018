// Owner: Costa
// Exercise: blobls
// Created in 21/01/2018 13:15:06

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef long long int Integer;


int main(){

    int n = 0;

    scanf("%d", &n);


    int i = 0;
    for(; i < n; i++){
        double comida = 0;
        scanf("%lf", &comida);

        int k = 0;
        while(comida > 1.0) {comida /= 2; k++;}

        printf("%d dias\n", k);
        
    }

    return 0;
}
