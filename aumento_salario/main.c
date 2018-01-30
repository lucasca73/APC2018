// Owner: Costa
// Exercise: aumento_salario
// Created in 09/01/2018 09:14:35

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int ratio[] = {15, 12, 10, 7, 4};
    double salary_increase[] = {1.15, 1.12, 1.10, 1.07, 1.04};
    double salary_range[] = {400.00, 800.00, 1200.00, 2000.00, 999999.00};

    double current = 0.0;

    scanf("%lf", &current);

    int i = 0;
    while(i < 5){

        if(current <= salary_range[i] ){

            double new_salary = current*salary_increase[i];
            double increase = new_salary - current;

            printf("Novo salario: %.2lf\n", current*salary_increase[i] );
            printf("Reajuste ganho: %.2lf\n", increase);
            printf("Em percentual: %d %%\n", ratio[i]);

            break;
        }

        i++;
    }

    return 0;
}
