
#include <stdio.h>

int main() {
             int num1, num2, num3;
             printf ("ennder three number");
             scanf ("%d %d %d", &num1, &num2, &num3);


             if (num1 > num2  &&  num1 > num3)
             printf ("greater than : %d",num1);


             if (num2 > num1  &&  num2 > num3)
             printf ("greater than : %d",num2);

             if (num3 > num1 &&  num3 > num2)
             printf ("greater than : %d",num3);
           }
