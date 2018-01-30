// Owner: Costa
// Exercise: Intervalo
// Created in 11/01/2018 10:35:47

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double range[] = {0,25,50,75,100};
char h_lim[] = {')',']'};
char l_lim[] = {'(','['};


int main(){

    double n;

    scanf("%lf", &n);

    if(n < 0.0 || n > 100.0){
        printf("Fora de intervalo\n");
        return 0;
    }

    if(n == range[4]){
        printf("Intervalo (75,100]\n");
        return 0;
    }


    int i = 0;
    while(i < 4){

        if(n <= range[i+1]){
            printf("Intervalo %c%.0lf,%.0lf]\n", 
                l_lim[ n == range[i] || n == range[i+1] ],
                range[i],
                range[i+1]
            );
            return 0;
        }
        i++;
    }

    return 0;
}