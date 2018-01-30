// Owner: Costa
// Exercise: conversao_tempo
// Created in 11/01/2018 10:03:52

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    long int sec;

    scanf("%ld", &sec);

    long int t_hr = floor(sec/3600.00);
    sec -= t_hr * 3600;

    long int t_min = floor(sec/60.00);
    sec -= t_min * 60;

    long int t_sec = sec;
    
    printf("%ld:%ld:%ld\n", t_hr, t_min, t_sec);

    return 0;
}
