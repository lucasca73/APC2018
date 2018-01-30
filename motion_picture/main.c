// Owner: Costa
// Exercise: motion_picture
// Created in 10/01/2018 10:56:51

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double a, b;

    scanf("%lf %lf", &a, &b);

    printf("%.2lf%%\n", ( (b / a) - 1 )*100 );

    return 0;
}
