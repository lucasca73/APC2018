// Owner: Costa
// Exercise: coluna_matriz
// Created in 29/01/2018 10:50:49

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define T 12
double m[T][T];


int main(){

    double sum = 0;
    memset(m, 0, sizeof(m[0][0]) *T*T );

    int n = 0;
    scanf("%d ", &n);

    char op;
    scanf("%c ", &op);

    int i = 0;
    for(; i < T; i++){

        int j = 0;
        for(; j < T; j++){
            scanf("%lf", &m[i][j]);
            if(j == n){
                sum += m[i][j];
            }
        }
    }

    if(op == 'M'){
        sum /= T;
    }

    printf("%.1lf\n", sum);

    return 0;
}
