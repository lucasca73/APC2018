// Owner: Costa
// Exercise: ha_muito_tempo
// Created in 21/01/2018 14:52:33

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef long long int Integer;




int main(){

    int n = 0;

    scanf("%d", &n);

    int i = 0;

    for(; i < n; i++){

        Integer year;

        scanf("%lld", &year);

        year -= 2015;

        if( year < 0){
            year *= (-1);
            printf("%lld D.C.\n", year);
        }else{
            year += 1;
            printf("%lld A.C.\n", year);
        }

    }

    return 0;
}
