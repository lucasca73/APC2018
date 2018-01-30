// Owner: Costa
// Exercise: cara_coroa
// Created in 21/01/2018 14:34:53

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef long long int Integer;


int main(){

    int n = 1;

    while(n != 0){
        scanf("%d", &n);

        int i = 0;
        int joao = 0;
        int maria = 0;
        for(; i < n; i++){
            int c;
            scanf("%d ", &c);
            maria += c == 0? 1:0;
            joao += c == 1? 1:0;
        }

        if(n != 0)
            printf("Mary won %d times and John won %d times\n", maria, joao);


    }

    return 0;
}
