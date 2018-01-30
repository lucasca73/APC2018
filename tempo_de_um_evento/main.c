// Owner: Costa
// Exercise: tempo_de_um_evento
// Created in 09/01/2018 09:39:36

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int t_value[] = {86400,3600,60, 1};
    int date[] = {0,0,0,0};
    int day_i, hr_i, min_i, seg_i;
    int day_f, hr_f, min_f, seg_f;

    scanf("Dia %d", &day_i);
    scanf("%d : %d : %d", &hr_i, &min_i, &seg_i);
    
    getchar();

    scanf("Dia %d", &day_f);
    scanf("%d : %d : %d", &hr_f, &min_f, &seg_f);

    date[0] = day_f - day_i;
    date[1] = hr_f  - hr_i;
    date[2] = min_f - min_i;
    date[3] = seg_f - seg_i;

    // int seconds = date[0]*t_value[0]
    //                     + date[1]*t_value[1] 
    //                     + date[2]*t_value[2]
    //                     + date[3]*t_value[2];

    // int i = 0;
    // while(seconds > 0){

    //     if(i >= 4){
    //         printf("problem!");
    //         break;
    //     }

    //     date[i] = floor((double)seconds/(double)t_value[i]);
    //     seconds -= date[i] * t_value[i];

    //     i++;
    // }

    int i = 4;
    while(i >= 0){

        if (date[i] < 0){
            date[i-1] -= 1;
            date[i] += t_value[i-1]/t_value[i];
        }

        i -= 1;
    }

    printf("%d dia(s)\n",       date[0]);
    printf("%d hora(s)\n",      date[1]);
    printf("%d minuto(s)\n",    date[2]);
    printf("%d segundo(s)\n",   date[3]);

    return 0;
}
