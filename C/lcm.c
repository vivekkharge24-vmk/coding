#include<stdio.h>
int main()
{
    // (LCM) Lowast Common Multiple Program
    int num1,num2,max;

    printf("Enter First Number :");
    scanf("%d",&num1);
    printf("Enter Second Number :");
    scanf("%d",&num2);
    
    if(num1<=0 || num2<=0)
    {
        printf("Invalid Number! Please Enter Positive Number");
    }
    else 
    {
        max=(num1 > num2) ? num1 :num2;
        for(int i=max;i<=(num1*num2);i++)
        {
            if(i % num1 == 0  && i % num2 == 0)
            {
                printf("LCM of two given number is %d",i);
                break;
            }
        }
    }
    return 0;
}
