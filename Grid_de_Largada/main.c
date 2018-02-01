// Owner: Costa
// Exercise: Grid_de_Largada
// Created in 01/02/2018 10:38:46

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

typedef long long int Integer;
#define T 10000
#define true 1
#define false 0

int saida[T];
int chegada[T];
int n;



int count(){

    int count = 0;
    int pass = false;

    int i = 0;
    for(; i < n; i++ ){
        int bigger = 0;
        int v_chegada = chegada[i];
        //printf("(_%d)",v_saida);

        int k = i;
        for(; k < n; k++ ){
            
            int v_saida = saida[k];
            //printf("(#%d)",v_chegada);

            if(v_saida == v_chegada){

                //printf("(%d-%d)", i, k );

                if (abs(i - k) > bigger ) {
                    bigger = k;
                    count += abs(i - k);
                }
            }
        }

        //printf("Bg_%d(%d) ", bigger, saida[bigger]);

        while(bigger > i){
            
            int aux = saida[bigger - 1];
            saida[bigger - 1] = saida[bigger];
            saida[bigger] = aux;

            bigger -= 1;
        }
    }

    

    return count;
}

int main(){

    n = 0;

    while( scanf("%d", &n) != EOF ){

        int i = 0;
        for(; i < n; i++){
            scanf("%d", &saida[i] );
        }

        for(i = 0; i < n; i++){
            scanf("%d", &chegada[i] );
        }

        printf("%d\n", count() );

        n--;
    }

    return 0;
}

