#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Two Numbers:\n");
    scanf("%d%d",&a,&b);
    printf("Before Swapping Numbers:a=%d b=%d\n",a,b);

    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swapping Numbers: a=%d b=%d",a,b);
    return 0;
}