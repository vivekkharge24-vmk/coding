#include<stdio.h>
int main()
{
    int num,i;

    printf("Enter a number :");
    scanf("%d",&num);

    if(num<2)
    {
        printf("Not prime number");
        return 0;
    }
    else
    {
        for(i=2;i<=num-1;i++)
        {
           if(num%i==0)
           {
            printf("Not prime number");
            return 0;
           }
        }
         printf("Prime number");
 
    }

}