#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int a, b, c, maior, diff;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    diff = abs(a-b) + abs(a-c) + abs(c-b);
    
    maior = (a*6 + b*6 + c*6 + diff*3)/16;
    
    printf("%d eh o maior\n", maior);
 
    return 0;
}