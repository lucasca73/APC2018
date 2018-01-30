// Owner: Costa
// Exercise: led
// Created in 25/01/2018 09:45:12

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef long long int Integer;

#define TAM 10000000


int values[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};


int main(){

    char c[TAM];
    int entries = 0;
    

    scanf("%d ", &entries);

    int i = 0;
    for(; i < entries; i++){
        int leds = 0;

        scanf("%s ", c);
        //scanf("%9[^\n]", c);
        
        int k = 0;
        for(; c[k] != 0; k++){
            int number = c[k] - '0';

            leds += values[number];
        }

        printf("%d leds\n", leds);

    }

    return 0;
}
