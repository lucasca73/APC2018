// Owner: Costa
// Exercise: bilhetes_falsos
// Created in 29/01/2018 11:29:03

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


#define T 20000
int bils[T];

int repeated[T]; 


int main(){

    

    while(1){

        memset(bils, 0, sizeof(bils[0])*T );
        memset(repeated, 0, sizeof(repeated[0])*T );
        int count = 0;
        int a, b;
        scanf("%d %d ", &a, &b);

        if (a == b && a == 0) break;

        a = a > b? a:b;

        int i = 0;
        for(; i < a; i++){
            scanf("%d", &b);

            int found = 0;
            int k = 0;
            while(bils[k] != 0){

                if(bils[k] == b){
                    //printf("passed (%d)  (%d)(%d)\n", k, b, bils[k]);

                    int rep = 0;
                    int h = 0;
                    for(; repeated[h] != 0; h++){

                        //printf("rep: (%d) (%d)(%d)\n", h,b, repeated[h]);

                        if(repeated[h] == b){
                            rep = 1;
                            break;
                        }
                    }

                    if(rep == 0){
                        repeated[h] = b;
                        count += 1;
                        found = 1;
                        k += 1;
                        break;
                    }

                }

                k += 1;
            }

            if(!found){
                //printf("debug adding: [%d] = %d\n", k,b);
                bils[k] = b;
            }
        }

        printf("%d\n", count);

    }
    

    return 0;
}
