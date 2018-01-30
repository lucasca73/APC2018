// Owner: Costa
// Exercise: media_3
// Created in 13/01/2018 13:45:29

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define true 1
#define false 0

void aprovado(int flag){
    if(flag >= 1){
        printf("Aluno aprovado.\n");
    }else{
        printf("Aluno reprovado.\n");
    }    
}

int main(){

    double n1, n2, n3, n4, exame;

    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    double media = n1*2 + n2*3 + n3*4 + n4*1;
    media /= 2 + 3 + 4 + 1;

    printf("Media: %.1lf\n", media);

    if( media >= 7.0 ){
        aprovado(true);
        return 0;
    }

    if( media >= 5.0 && media <= 6.9 ){
        printf("Aluno em exame.\n");
        scanf("%lf", &exame);

        media += exame;
        media /= 2;

        printf("Nota do exame: %.1lf\n",exame);

        if(media > 4.9){
            aprovado(true);
        }else{
            aprovado(false);
        }

        printf("Media final: %.1lf\n", media);

    }


    if( media <= 4.9 ){
        aprovado(false);
        return 0;
    }

    return 0;
}
