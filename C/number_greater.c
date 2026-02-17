#include<stdio.h>
int main()
{
    int a,b;

    printf("Enter A Number : ");
    scanf("%d", &a);

    printf("Enter B Number : ");
    scanf("%d", &b);

    if(a>b)
    {
        printf("%d is greater" ,a);
    }
    else
    {
       printf("%d is greater" ,b);
    }
    return 0;


}