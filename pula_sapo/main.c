// Owner: Costa
// Exercise: pula_sapo
// Created in 21/01/2018 14:06:27

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef long long int Integer;


int canos(int jump, int n){

    int i = 0;
    int last = 0;

    for(; i < n; i++){

        

        int current = 0;
        scanf("%d", &current);

        if(last != 0){

            
            if( jump < abs(current - last) ){
                
                return 0;
            }
        }

        last = current;
    }
    return 1;
}

int main(){

    int n = 0;
    int jump = 0;

    scanf("%d %d", &jump, &n);

    if(canos(jump, n)){
        printf("YOU WIN\n");
    }else{
        printf("GAME OVER\n");
    }

    return 0;
}
