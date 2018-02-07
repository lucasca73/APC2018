// Owner: 
// Exercise: Pepe_ja_tirei_a_vela
// Created in 05/02/2018 12:24:14

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

typedef long long int Integer;
#define T 100000
#define true 1
#define false 0


int main(){

    int n = 0;

    scanf("%d ", &n);

    while( n > 0 ){
        int h, m, door;
        scanf("%d %d %d", &h, &m, &door);

        //Presenting hour
        if(h < 10){
            printf("0");
        }
        printf("%d", h);

        printf(":");

        //Presenting minutes
        if(m < 10){
            printf("0");
        }
        printf("%d", m);


        printf(" - A porta %s!\n", door? "abriu":"fechou" );

        n--;
    }

    return 0;
}
