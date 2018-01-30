// Owner: Costa
// Exercise: multiplos
// Created in 09/01/2018 08:42:06

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int a,b;

    scanf("%d %d", &a, &b);

    double rest = 2;

    if(b < a){
        int aux = a;
        a = b;
        b = aux;
    }

    rest = (double)b/(double)a;

    // printf("%d %lf %lf\n",(int)rest, floor(rest), rest);
    // printf(" %d", rest == floor(rest));

    if(rest != floor(rest) ) {
        printf("Nao sao Multiplos\n");
    }else{
        printf("Sao Multiplos\n");
    }

    return 0;
}
