// Owner: Costa
// Exercise: tempo_de_jogo_com_minutos
// Created in 09/01/2018 09:29:53

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int t_val[] = {24, 60};
    int date[] = {0, 0};

    int hi, mi, hf, mf;

    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

    date[0] = hf - hi;
    date[1] = mf - mi;

    int i = 1;
    while(i >= 0){

        if (date[i] < 0){
            date[i-1] -= 1;

            if(date[i-1] < 0){
                date[i-1] += t_val[i-1];
            }

            date[i] += t_val[i];
        }

        i -= 1;
    }

    if(date[0] == 0 && date[1] == 0 ){
        date[0] = 24;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", date[0], date[1]);

    return 0;
}
