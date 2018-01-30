// Owner: Costa
// Exercise: formula_bhaskara
// Created in 11/01/2018 10:11:16

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    double r1 = 0;
    double r2 = 0;

    double bhask = b*b -4*a*c;

    if(bhask < 0 || a == 0.0){
        printf("Impossivel calcular\n");
        return 0;
    }

    //printf("%lf ", bhask);

    r1 = ( -b + sqrt(bhask) ) / (2*a);
    r2 = ( -b - sqrt(bhask) ) / (2*a);

    

    printf("R1 = %.5lf\n", r1);

    //printf("%lf %lf %lf %lf", 34.0/2*a, -b, -sqrt(bhask), 2*a);
    printf("R2 = %.5lf\n", r2);

    return 0;
}
