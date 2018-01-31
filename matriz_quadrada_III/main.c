// Owner: Costa
// Exercise: matriz_quadrada_III
// Created in 31/01/2018 10:47:23

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(){

    int input = 0;

    int spaces = 0;

    while(1){

        scanf("%d", &input);

        if(input == 0) break;


        int max = 1 << (input + input - 2);

        spaces = 1;
        while( (max /= 10) > 0 ) {
            spaces += 1;
        }

        int i = 0;
        int count = 0;
        int last = 1;
        int i_cor = input - 1;

        while(count < input){
            

            last = i + count;

            int sp = spaces;
            double m = 1 << (last);
            while( (m /= 10.0) > 0.9 ){

                // if ( (1 << last) == 16 )
                //     printf("m:%.1lf", m);
                //if(sp > 1){
                    sp -= 1;
                //}
            }

            if( i == 0){
                while(sp > 1){
                    printf(" ");
                    sp--;
                }
            }else{
                while(sp > 0){
                    printf(" ");
                    sp--;
                }
            }

            printf("%d", 1 << (last) );
            
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
