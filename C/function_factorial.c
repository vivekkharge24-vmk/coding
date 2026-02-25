#include<stdio.h>
    // Factorial program using recursion function
    int fact(int n)
    {
        if(n==0|| n==1)
        {
            return 1;
        }
        else
        {
            return n*fact(n-1);
        }
    }

    int main()
    {
        int number,result;

         printf("Enter a number :");
         scanf("%d",&number);

         if(number < 0)
         {
            printf("Invalid number ");
         }
        else
         {
           result = fact(number);

           printf("%d given number factorial is %d",number,result);
         }
   }