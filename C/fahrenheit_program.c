#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter a celsius:");
    scanf("%f",&c);
    f=(1.8*c)+32;
    printf("Fahrenheit = %.2f",f);
    return 0;
}