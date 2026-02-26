#include<stdio.h>
int main()
{
    // Factorial program using pointer
    int num;
    int *p;
    p=&num;

    printf("Enter a number :");
    scanf("%d",p);

    long fact=1;
    if(*p<0)
    {
        printf("Invalid number");
    }
    else
    {
       for(int i=1;i<=*p;i++)
       {
          fact = fact*i;
        
       }
      printf("%d given number factorial is %ld ",*p,fact);
    }

}