// Owner: Costa
// Exercise: juros_do_projeto
// Created in 15/01/2018 08:42:20

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double juros(double a, double b){
    return ((b/a)-1)*100;
}

int main(){

    double x1, x2;
    double x3, x4;
    double x5, x6;

    int i = 0;

    //scanf("%lf %lf", &x1, &x2);

    while(scanf("%lf %lf", &x1, &x2) != EOF){

        // if(i > 0){
        //     printf("\n");
        // }

        printf("Projeto %d:\nPercentual dos juros da aplicacao: %.2lf %%\n\n", i + 1, juros(x1, x2) );
        
        i++;
        
    }

    return 0;
}
