#include <stdio.h>

int main() {
            int limit, i, number[100], sum=0;
            printf ("enter a limit");
            scanf ("%d", limit);
            printf ("enter namber")


            for (i = 0; i < limit; i++){
            scanf ("%d", number[i]);
            }

            for (i = 0; i < limit; i++){
            sum = sum + number[i];
             }
            
            printf ("%d", sum);
           }
