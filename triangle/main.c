// Owner: Costa
// Exercise: triangle
// Created in 10/01/2018 10:21:48

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int valid_triangle(int a, int b, int c){
    return (a < b + c) && (b < a + c) && (c < a + b);
}


int main(){

    
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int count = 0;

    //14 40 12 60
    count += valid_triangle(a,b,c);
    count += valid_triangle(a,b,d);
    count += valid_triangle(a,d,c);
    count += valid_triangle(b,d,c);
    
    if(count > 0){
        printf("S\n");
    }else{
        printf("N\n");
    }

    return 0;
}
