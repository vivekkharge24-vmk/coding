#include<stdio.h>
int main()
{
    // (HCF) Highest Common Factor Program
    int num1,num2,max;

    printf("Enter First Number :");
    scanf("%d",&num1);
    printf("Enter Two Number :");
    scanf("%d",&num2);

    if(num1<= 0 || num2 <= 0)
    {
         printf("Invalid Number! Please Enter Positive Number");
    }
    else 
    {
        max = (num1<num2) ? num1 :num2;

        for(int i=max;i>0;i--)
        {
           if(num1 % i == 0 && num2 % i == 0)
           {
            printf("HCF of two given number is %d",i);
            break;
           }
        }
    }
    return 0;
    
}