// Owner: Costa
// Exercise: cifra_de_cezar
// Created in 30/01/2018 18:13:16

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(){

    int n = 0;
    char str[100];
    int loop = 'Z' - 'A' +1;

    scanf("%d", &n);

    while( n > 0 ){

        int cor = 0;
        scanf("%s", str);

        scanf("%d", &cor);

        int i = 0;
        while( *(str+i) ){

            *(str+i) = *(str+i) - cor;
            if(*(str+i) < 'A'){
                *(str+i) += loop;
            }

            i++;
        }

        printf("%s\n", str);

        n--;
    }

    return 0;
}

// abcdefghijklmnopqrstuvxyz