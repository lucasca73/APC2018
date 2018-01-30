// Owner: Costa
// Exercise: preenchimento_de_vetor_I
// Created in 29/01/2018 10:27:26

#include <stdio.h>
#include <stdlib.h>
#include <math.h>




int main(){

    int vec[] = {0,0,0,0,0,0,0,0,0,0};

    scanf("%d", &vec[0]);

    int i = 1;
    for(; i < 10; i++){
        vec[i] = vec[i-1]*2;
        
        
    }

    for(i = 0; i < 10; i++){
        printf("N[%d] = %d\n", i, vec[i]);
    }
    

    return 0;
}
