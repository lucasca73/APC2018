// Owner: Costa
// Exercise: esquerda_volver
// Created in 23/01/2018 23:55:56

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
 
char dir[] = {'N','L','S','O'};

void program(int n){
    
    scanf("%d", &n);
    

    if(n == 0){
        return;
    }

    

    int index = 0;

    char str[1001];
    scanf("%s", str);

    //printf("(%s)", str);

    int i = 0;
    for(; i < n; i++){    
        
        char c = str[i];

        //printf("(%c)", c);

        if(c == 'D' ){
            index += 1;
            index = index%4; 
        }else{
            index -= 1;
            index = index < 0? 3:index;
        }
        
    }

    printf("%c\n",dir[index]);
}
 
int main() {
 
    int n = 1;
     
    do{

        if(scanf("%d", &n) == EOF){
            break;
        }

        program(n);
    
    }while(n != 0);
 
    return 0;
}