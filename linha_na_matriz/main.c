// Owner: Costa
// Exercise: linha_na_matriz
// Created in 24/01/2018 13:04:22

#include <stdio.h>
#include <stdlib.h>
#include <math.h>



#define max 12


int main(){

    int linha = 0;
    char operation;

    scanf("%d ", &linha);
    scanf("%c ", &operation);

    double sum = 0;
    
    int i = 0;
    for(; i < max; i++){

        int j = 0;
        for(; j < max; j++){
            double a;
            scanf("%lf ",&a);

            if(i == linha){
                sum += a;
            }
        }
    }

    if(operation == 'M'){
        sum = sum/max;
    }

    printf("%.1lf\n", sum);

    return 0;
}
