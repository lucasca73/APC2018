// Owner: Costa
// Exercise: sedex
// Created in 10/01/2018 13:08:21

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double r, h,l,p;
    scanf("%lf", &r);
    r /= 2;

    scanf("%lf %lf %lf", &h, &l, &p);

    if(h >= r*2 && l >= r && p >= r){
        printf("S\n");
    }else{
        printf("N\n");
    }

    return 0;
}
