// Owner: Costa
// Exercise: balanco_de_parenteses_i
// Created in 07/02/2018 19:31:14

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

typedef long long int Integer;
#define T 100000
#define true 1
#define false 0



int main(){

    char str[T];

    
    while( fgets(str, T, stdin) != NULL) {

        int correct = true;

        char c;
        int count = 0;

        int i = 0;
        for(; *(str+i) ; i++){

            c = *(str+i);

            if( c == '(' ){
                count += 1;
            }

            if( c == ')'){
                count -= 1;
            }

            if(count < 0){
                correct = false;
                break;
            }
        }

        correct = count == 0? true:false;

        printf("%s\n", correct? "correct":"incorrect");
    }

    return 0;
}
