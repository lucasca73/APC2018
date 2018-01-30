// Owner: Costa
// Exercise: idade
// Created in 08/01/2018 18:36:12

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int age_days = 0;
    double rest = 1;
    int types[] = {365, 30, 1};
    char* type_names[] = {"ano(s)", "mes(es)", "dia(s)"};

    scanf("%d", &age_days);

    int i = 0;
    while(i < 3){
        int t = types[i];
        char* t_name = type_names[i];
        int division = floor( ((double)age_days) / ((double)t) );
        age_days -= division*t;

        printf("%d %s\n", division, t_name);

        i += 1;
    }

    return 0;
}
