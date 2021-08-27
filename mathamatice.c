#include <stdio.h>

int main()
           {
            int num1,num2,choice,result;
    printf ("enter two number")
    scanf ("%d %d",&num1,&num2);
    printf ("1 adition /n2 subtraction /n3 multiplication /n4 division")
    scanf ("%d",&choice;
    
    
    if (choice ==1){
        result=num1 + num2;
        printf ("result = %d",result);
        
        
    }else if (choice ==2){
        result =num1 - num2;
        printf ("result = %d",result);
        
        
    }else if (choice ==3){
        result =num1 * num2;
        printf ("result = %d",result);
        
        
    }else if (choice ==4){
        result =num1/num2;
        printf ("result = %d",result);
        
    }else
    printf ("you are floll");
           }
