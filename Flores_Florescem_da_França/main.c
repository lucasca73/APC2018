// Owner: Costa
// Exercise: Flores_Florescem_da_França
// Created in 01/02/2018 10:17:07

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

typedef long long int Integer;

#define T 10000


char str[T];

int tauto(){

    char* pt = str;
    char first = tolower(*pt);

    //printf("%c", *pt);

    for(; *pt; pt += 1){

        //printf("(%c)", *pt);

        //Equal Space
        if(*pt == ' '){
            if( tolower(*(pt+1)) != first ){
                return 0;
            }
            pt += 1;
        }
    }

    return 1;
}


int main(){

    
    int n = 0;

    while(1){

        fgets(str, T, stdin);

        if( (*str) == '*' ) break;

        printf("%s\n", tauto()? "Y":"N");
        
    }

    return 0;
}
