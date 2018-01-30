// Owner: Costa
// Exercise: bob_conduite
// Created in 18/01/2018 11:52:39

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef long long int Integer;


int main(){

    int x, y;

    getchar();

    while( scanf("%d %d", &x, &y) != EOF){
        printf("%d\n", x+y);
    }

    return 0;
}
