// Owner: Costa
// Exercise: matriz_quadrada_II
// Created in 29/01/2018 19:26:47

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>




int main(){

    int input = 0;

    while(1){

        scanf("%d", &input);

        if(input == 0) break;


        int i = 0;
        int count = 0;
        int last = 1;
        int i_cor = input - 1;

        while(count < input){
            if(i == 0){
                printf("%3d",last);
            }else{
                printf("%4d",last);
            }

            if(i < count){
                last -= 1;
            }else{
                last += 1;
            }
            
            i++;

            if(i%input == 0){
                count += 1;
                last = count + 1;
                i = 0;
                printf("\n");
            }

        }
        printf("\n");


    }

    return 0;
}
