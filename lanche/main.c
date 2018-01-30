// Owner: Costa
// Exercise: lanche
// Created in 09/01/2018 08:33:57

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int itens_id[] = {0,0,1,2,3,4};
    double itens_price[] = {4.00, 4.50, 5.00, 2.00, 1.50};

    int id, amount;

    scanf("%d %d", &id, &amount);

    printf("Total: R$ %.2lf\n", itens_price[itens_id[id]]*amount );

    return 0;
}
