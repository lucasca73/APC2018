// Owner: Costa
// Exercise: mac_pronalts
// Created in 21/01/2018 14:29:20

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef long long int Integer;

double prods[] = {1.50, 2.50, 3.50, 4.50, 5.50};


int main(){

    int n = 0;
    double total = 0;

    scanf("%d", &n);

    int i = 0;
    for(; i < n; i++){
        int p = 0;
        int qt = 0;
        scanf("%d %d", &p, &qt);

        p -= 1001;

        total += prods[p] * qt;

    }

    printf("%.2lf\n", total);

    return 0;
}
