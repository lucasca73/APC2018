// Owner: Costa
// Exercise: frequencia_letras
// Created in 25/01/2018 09:42:25

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

#define T 200

char caracteres[T];
int ocorrencia[T];
char input[T];
char output[T];

void addCaractere(char c){

    if(c < 97 || c > 122){
        return;
    }

    int i = 0;
    for(; i < T; i++){

        if(caracteres[i] == 0){
            caracteres[i] = c;
            ocorrencia[i] += 1;
            break;
        }
        
        if(caracteres[i] == c){
            ocorrencia[i] += 1;
            break;
        }
    }
}

void show(){

    printf("%s\n", input);

    int i = 0;
    for(; caracteres[i]; i++){
        printf("%d(%c:%d)\n",i,caracteres[i], ocorrencia[i]);
    }

    printf("\n");

}


void get_biggers(){
    
    int bigger = 0;

    int i = 0;
    for(; caracteres[i]; i++){
        
        if(ocorrencia[i] > ocorrencia[bigger] ){
            bigger = i;
        }
    }

    int out = 0;
    output[out] = caracteres[bigger];

    i = 0;
    
    for(; caracteres[i]; i++){
        
        if(ocorrencia[i] == ocorrencia[bigger]  && i != bigger){
            out += 1;
            output[out] = caracteres[i];
        }
    }
}

void sortString(char *str){

    //printf("(%s)\n", output);

    int i = 0;
    while(str[i]){
        int swapped = 0;

        int j = strlen(str) - 1;
        for(; j > i; j--){
            if(str[j-1] > str[j] ){
                char aux = str[j];
                str[j] = str[j-1];
                str[j-1] = aux;
                swapped = 1;
                //printf("(%s)\n", output);
            }
        }

        if (!swapped){
            break;
        }

        i++;
    }

}

void reset(){
    memset(caracteres, 0, T);
    memset(ocorrencia, 0, T);
    memset(input, 0, T);
    memset(output, 0, T);
}


int main(){

    int entries = 0;

    

    scanf("%d ", &entries);

    int i = 0;
    for(; i < entries; i++){
        reset();
        fgets(input, T, stdin);

        //printf("%s", input);

        int k = 0;
        for(; input[k] != 0; k++){
            input[k] = tolower(input[k]);
            addCaractere(input[k]);
        }
        get_biggers();
        sortString(output);
        printf("%s\n", output);
        //show();
    }

    return 0;
}
