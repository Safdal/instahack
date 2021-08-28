#include <stdio.h>

int main() {
            int limit, i, number = 100, key, flag=0;
            printf ("enter a array limit");
            scanf ("%d", &limit);
            printf ("enter number");


            for (i = 0; i < limit; i++){
            scanf ("%d", &number[i]);
            }

            printf ("enter a search key ");
            scanf ("%d", &key);

            for (i = 0; i < limit; i++){
            if (key == numner[i]){
            flag = 1;
            break;
            
             }
            }

           if ( flag == 1){
           printf ("your position %d ", i+1);

            }else {
            printf ("not found");
            
             } 
           }
