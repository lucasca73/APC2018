// Owner: Costa
// Exercise: maquina_verificacao_automatizada
// Created in 30/01/2018 10:41:10

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef long long int Integer;


int main(){

    int a = 0;
    int b = 0;

    int k = 0;
    for(; k < 2; k++){

        int i = 0;
        for(; i < 5; i++){
            int bit = 0;
            scanf("%d", &bit);

            //Setting bit position
            bit *= 1 << i;

            if(k == 0){
                a = a | bit;
            }else{
                b = b | bit;
            }
            // printf("%d %d ?\n",k , i);
        }
    }

    printf("%c\n", a + b == 31? 'Y':'N');

    return 0;
}
