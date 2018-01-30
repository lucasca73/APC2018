// Owner: Costa
// Exercise: detetive_watson
// Created in 29/01/2018 10:35:45

#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(){


    int i = 0;
    int n = 1;

    while(n != 0){
        scanf("%d", &n);
        if ( n == 0) return 0;

        int bg[] = {0,0};
        int index[] = {0,0};

        for(i = 0; i < n; i++){
            int k = 0;
            scanf("%d ", &k);

            if(k > bg[0]){
                bg[1] = bg[0];
                bg[0] = k;

                index[1] = index[0];
                index[0] = i;

            }else if(k > bg[1] && k < bg[0]){
                bg[1] = k;
                index[1] = i;
            }
        }

        if(bg[1] == 0){
            break;
        }

        printf("%d\n", index[1] + 1);

    }


    return 0;
}
