// Owner: 
// Exercise: funcoes
// Created in 05/02/2018 16:16:15

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

typedef long long int Integer;
#define T 100000
#define true 1
#define false 0

int cmp(char* word, char* other){

    int count = 0;
    int max = 0;
    int result = false;

    int i = 0;
    for(; *(word+i) ; i++){
        max += 1;
        //printf("cmp (%c)(%c)", *(word+i), *(other+i) );

        if( !(*(other+i)) ){
            count = 0;
            break;
        }

        if( *(word+i) == *(other+i) ){
            //printf(" match! ");
            count += 1;
        }else{
           // printf(" -- ");
        }

        //printf("\n");
    }

    if(count+1 == max || count == max){
        result = true;
    }

    return result;
}

int main(){

    int n = 0;
    char str[10];

    scanf("%d", &n);

    while( n > 0 ){
        scanf("%s", str );

        if( cmp("one", str) ){
            printf("1\n");
        }else if( cmp("two", str)  ){
            printf("2\n");
        }else{
            printf("3\n");
        }

        n--;
    }

    return 0;
}
