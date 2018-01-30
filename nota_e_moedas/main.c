// Owner: Costa
// Exercise: nota_e_moedas
// Created in 08/01/2018 18:51:59

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double money = 0.0;
int paper_type[] = {100,50,20,10,5,2};
double coin_type[] = {1, 0.50, 0.25, 0.10, 0.05, 0.01};

void calculate_coins();
void calculate_paper();


int main(){

    scanf("%lf", &money);

    calculate_paper();
    calculate_coins();

    return 0;
}

void calculate_paper(){
    int i = 0;
    int coins = (int) floor(money);

    printf("NOTAS:\n");

    while(i < 6){
        
        int type = paper_type[i];
        int amount = floor(coins/type);

        coins -= type*amount;
        money -= type*amount;

        printf("%d nota(s) de R$ %d.00\n", amount, type);
    
        i++;
    }
}

void calculate_coins(){
    int i = 0;

    int coins = money*100;

    printf("MOEDAS:\n");

    while(i < 6){
        
        //printf("(%.2lf %d %.2lf) ", money, coins, money*100 );

        double t = coin_type[i];
        int type = t*100;
        int amount = floor(coins/type);
        
        coins -= type*amount;
        money -= type*amount/100;
        printf("%d moeda(s) de R$ %.2lf\n", amount, t);
    
        i++;
    }
}
