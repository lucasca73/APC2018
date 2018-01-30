// Owner: Costa
// Exercise: teste_de_selecao_1
// Created in 09/01/2018 13:04:51

/*

Leia 4 valores inteiros A, B, C e D. A seguir, 
se B for maior do que C e se D for maior do que A, 
e a soma de C com D for maior que a soma de A e B 
e se C e D, ambos, forem positivos e se a variável A 
for par escrever a mensagem "Valores aceitos", 
senão escrever "Valores nao aceitos".

B > C
D > A
C + D > A + B
C > 0
D > 0
A % 2

*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int valores_aceitos = 0;
    int a,b,c,d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    valores_aceitos += b > c;
    valores_aceitos += d > a;
    valores_aceitos += c + d > a + b;
    valores_aceitos += c > 0;
    valores_aceitos += d > 0;
    valores_aceitos += a % 2 == 0;

    if(valores_aceitos == 6){
        printf("Valores aceitos\n");
    }else{
        printf("Valores nao aceitos\n");
    }

    return 0;
}
