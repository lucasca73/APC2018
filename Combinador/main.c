// Owner: Costa
// Exercise: Combinador
// Created in 30/01/2018 10:59:49

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(){

    char str1[100];
    char str2[100];

    char result[100];

    int n = 0;
    scanf("%d ", &n);

    while(n > 0){

        // fgets(str ,100, stdin);
        
        scanf("%s %s", str1, str2);

        //printf("%s %s", str1, str2);

        int m = 0;
        int i = 0;
        int a = 0;
        int b = 0;
        while(i < 100){
            
            m = (m+1)%2;
            if(m){

                if(!*(str1+a)){
                    *(result+i) = *(str2+b);
                    b++;
                }else{
                    *(result+i) = *(str1+a);
                    a++;
                }

            }else{

                if(!*(str2+b)){
                    *(result+i) = *(str1+a);
                    a++;
                }else{
                    *(result+i) = *(str2+b);
                    b++;
                }
            }

            i++;
        }

        printf("%s\n", result);

        n--;
    }

    return 0;
}