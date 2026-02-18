#include<stdio.h>
int main()
{
    int a,b,ch,sum;
    printf("--- Calculator system ---\n");

    printf(" Enter First Number :");
    scanf("%d",&a);
    printf("\nEnter Second Number :");
    scanf("%d",&b);

    printf("Choice = 1.Addition 2.Subtraction 3.Multiplication 4.Division\n");

    printf("\nEnter a Choice Number :");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
        sum=a+b;
        printf("Addition of %d and %d is %d",a,b,sum);
        break;

        case 2:
        sum=a-b;
        printf("Subtraction of %d and %d is %d",a,b,sum);
        break;

        case 3:
        sum=a*b;
        printf("Multiplication of %d and %d is %d",a,b,sum);
        break;

        case 4:
        if(b == 0)
        {
          printf("Not divisible by 0 ! Try again");
        }
        else
        {
          sum=a/b;
          printf("Division of %d and %d is %d",a,b,sum);
        }
        break;

        default:
        printf("Invaild choice! Try again");
        break;

    }
return 0;        
}