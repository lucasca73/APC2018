// Owner: Costa
// Exercise: validacao_nota
// Created in 18/01/2018 12:40:53

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef long long int Integer;

double valid[] = {0,0};
int i = 0;

int main(){

    double n = 0;

    while( scanf("%lf", &n) != EOF ){
        if( n >= 0.0 && n <= 10.0 ){
            valid[i] = n;
            i++;
            
        }else{
            printf("nota invalida\n");
        }

        if(i >= 2){
            break;
        }
    }

    printf("media = %.2lf\n", (valid[0] + valid[1])/2  );

    return 0;
}
