// Owner: Costa
// Exercise: Bolhas_e_Baldes
// Created in 31/01/2018 11:32:37

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef long long int Integer;

#define T 100000
long long int values[T];
#define END 0
#define true 1
#define false 0

long long int max = 0;

long long int sort(){

    long long int times = 1;

    int i = 0;
    for(; max > 0; i++){

        int passed = false;
        int k = 1;

        for(; k < max; k++){

            if (values[k-1] > values[k]){
                //Debug
                //printf("swt:(%d)(%d)", values[k-1], values[k]);

                //Swap
                int aux = values[k-1];
                values[k-1] = values[k];
                values[k] = aux;

                //Increment
                times += 1;
                passed = true;
            }
        }

        if(passed == false){
            break;
        }else{
            max -= 1;
        }
    }
    
    return times;

}


long long int count(){

    long long int times = 0;
    long long int i = 0;
    for(; i < max; i++){
        times += llabs(values[values[i]] - i);
    }

    return times;
}


int main(){

    max = 1;

    memset(values, END, sizeof(int)*T );


    while(max != 0){

        scanf("%lld", &max);

        if(max == 0) break;

        int i = 0;
        while( i < max ){
            // scanf("%lld ", &values[i]);
            values[i] = max - i + 1;
            
            i++;
        }

        //printf("Hello");

        if( sort()%2 == 0 ){
            printf("Marcelo\n");
        }else{
            printf("Carlos\n");
        }
        

    }

    return 0;
}
