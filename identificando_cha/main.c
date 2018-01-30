// Owner: Costa
// Exercise: identificando_cha
// Created in 18/01/2018 10:51:12

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef long long int Integer;


int main(){

    int tea = 0;
    int s1, s2, s3, s4, s5;
    int result = 0;

    scanf("%d", &tea);

    //scanf("%d", &s1, &s2, &s3, &s4, &s5);

    while( scanf("%d", &s1) != EOF ){
        result += s1 == tea? 1:0;
    }

    printf("%d\n", result);
    

    return 0;
}
