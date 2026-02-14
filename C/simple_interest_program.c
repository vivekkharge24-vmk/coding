#include<stdio.h>
int main()
{
    float p,r,t,si;

    printf("--- Simple Interest Calculator ---\n");
    
    printf("Enter Principal Amount :");
    scanf("%f" ,&p);

    printf("Enter Rate Of Interest :");
    scanf("%f" ,&r);
    
    printf("Enter Time In Years :");
    scanf("%f" ,&t);

    si=(p*r*t)/100;

    printf("Pricipal : %.2f\n" ,p);
    printf("Rate : %.2f%%\n" ,r);
    printf("Time : %.2f years\n",t);
    printf("Simple Interest : %.2f\n" ,si);
    printf("Total Amount : %.2f" ,p+si);
    
    return 0;

}