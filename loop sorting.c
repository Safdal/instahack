#include <stdio.h>

int main() {
            int num[100], i, j, sort limit, 
            printf ("enter limit");
            scanf ("%d", limit);
           printf ("ender number");
            
           for (i = 0; i < limit; i++){
           scanf ("%d", num[i]);
            }

           for (i = 0; i < limit-1; i++){
           for (j = i + 1; j < limit; j++){
           if (num[i] > num[j]){
               sort = num[i];
               num[i] = num[j];
               num[j] = sort;
              }
             }
            }
           printf ("sorted number");
           for (i = 0; i < limit; i++){
           printf ("%d"\n,num[i]);
            }
           }
