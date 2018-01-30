// Owner: Costa
// Exercise: Combinador
// Created in 30/01/2018 10:59:49

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



int main(){

    char str[100];
    

    int n = 0;
    scanf("%d", &n);

    while(n > 0){

        scanf("%[^\n]s", str);

        printf("%s\n", str);

        n--;
    }

    return 0;
}
