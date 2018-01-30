// Owner: Costa
// Exercise: top_n
// Created in 10/01/2018 10:18:07

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int coloc[] = {1, 3, 5, 10, 25, 50, 100}; 

int main(){


    int c;
    scanf("%d", &c);

    int r = 0;
    int i = 0;
    while(r == 0){
        if(c <= coloc[i]){
            r = coloc[i];
        }
        i++;
    }

    printf("Top %d\n",r);

    return 0;
}
