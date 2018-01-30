// Owner: Costa
// Exercise: flipper
// Created in 09/01/2018 14:27:15

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define none 0x000
#define door_p 0x001
#define door_r 0x002

int exit_c = none;
int exit_b = door_p;
int exit_a = door_p | door_r;

int main(){

    int dp, dr;

    scanf("%d %d", &dp, &dr);

    dp = dp == 1? door_p : none;
    dr = dr == 1? door_r : none;
    dr = dp == none? none : dr;

    int current = dr | dp;

    if(exit_c == current){
        printf("C\n");
    }else if(exit_b == current){
        printf("B\n");
    }else if(exit_a == current){
        printf("A\n");
    }else {
        printf("Problem!");
    }

    return 0;
}
