// Owner: Costa
// Exercise: resposta_theon
// Created in 21/01/2018 15:01:27

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef long long int Integer;


int main(){

    int n = 0;
    int index = 0;
    int menor = 10000000;

    scanf("%d", &n);

    int i = 0;
    for(; i < n; i++){

        int t = 0;
        scanf("%d ", &t);

        if(t < menor){
            index = i+1;
            menor = t;
        }

    }

    printf("%d\n",index);


    return 0;
}
