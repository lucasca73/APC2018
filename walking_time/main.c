// Owner: Costa
// Exercise: walking_time
// Created in 10/01/2018 13:24:07

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a == b || b == c || a == c){
        printf("S\n");
        return 0;
    }

    int count = 0;

    count += a == b + c? 1:0;
    count += b == a + c? 1:0;
    count += c == a + b? 1:0;

    if(count > 0){
        printf("S\n");
    }else{
        printf("N\n");
    }

    return 0;
}
