// Owner: Costa
// Exercise: qual_triangulo
// Created in 09/01/2018 13:12:47

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


char* t_rect[] = {"Retangulo: N", "Retangulo: S"};
char* t_type[] = {"Invalido", "Valido-Equilatero", "Valido-Escaleno", "Valido-Isoceles"};

int main(){


    int a,b,c;

    scanf("%d %d %d", &a, &b, &c);

    //ordenar a
    if(a > b){
        int aux = a;
        a = b;
        b = aux;
    }

    //ordenar b
    if(b > c){
        int aux = b;
        b = c;
        c = aux;
    }

    //printf("(%d %d %d) ", a, b, c);

    int invalido = 0;

    invalido += a >= b + c;
    invalido += b >= a + c;
    invalido += c >= a + b;

    if(invalido > 0){
        printf("%s\n", t_type[0]);
        return 0;
    }

    if(a == b && b == c){
        printf("%s\n", t_type[1]); // Equilatero
    }else if(a == b || b == c){
        printf("%s\n", t_type[3]); // Isóceles
    }else{
        printf("%s\n", t_type[2]); // Escaleno
    }

    printf("%s\n", t_rect[c*c == a*a + b*b]); // Retangulo

    return 0;
}
