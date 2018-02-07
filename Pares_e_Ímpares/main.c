// Owner: Costa
// Exercise: Pares_e_Ímpares
// Created in 02/02/2018 10:53:56

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

typedef long long int Integer;
#define T 100000
#define true 1
#define false 0

long int pares[T];
long int impares[T];


void bubleSort(long int vec[], int max){

    int i = 0;
    int m = max;
    long int aux = 0;
    //printf("%d\n", max);
    
    for(; i < m; i++ ){

        int k = 0;
        for(; k < max-1; k++){

            //printf("[%d %d-%d]\t",i, k, k+1 );
            
            if(vec[k] > vec[k+1]){

                //printf("s[(%ld)(%ld)]", vec[k], vec[k+1]);
                aux = vec[k+1];
                vec[k+1] = vec[k];
                vec[k] = aux;
            }

            //printf("\n");
        }

        max--;
    }

}

void show(long int vec[], int max){
    int i = 0;
    if(max > 0){
        while(max > 0){
            max--;
            // printf("%ld\n", vec[max]);
        }
    }else{
        while(vec[i] != -1){
            //printf("%ld\n", vec[i]);
            i++;
        }
    }
    
}

int main(){

    int n = 0;

    scanf("%d", &n);
    int i = 0;
    long int v = 0;

    int i_par = 0;
    int i_imp = 0;

    memset(pares, -1, sizeof(pares[0])*T );
    memset(impares, -1, sizeof(impares[0])*T );


    while( i < n ){

        // scanf("%ld", &v );

        v = n - i;

        //printf("%ld\n", v);
        if(v%2){
            impares[ i_imp++ ] = v;
        }else{
            pares[ i_par++ ] = v;
        }

        i++;
    }

    
    bubleSort(pares, i_par);
    show(pares, 0);

    bubleSort(impares, i_imp);
    show(impares, i_imp);

    return 0;
}
