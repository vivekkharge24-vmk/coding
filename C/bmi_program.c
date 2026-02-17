#include<stdio.h>
int main()
{
    float w,h,bmi;

    printf("Enter a weight :"); // Enter weight in Kg
    scanf("%f",&w);

    printf("Enter a height :");  // Enter height in Centimeters (cm)
    scanf("%f",&h);
    h=h/100;    // (cm) converted in meter
    bmi=w/(h*h); // bmi = kg(cm*cm)

    if(bmi < 18.5)
    {
        printf("Body mass index = %.2f!  is Underweight",bmi);
    }
    else if(bmi >= 18.5 && bmi <= 24.9)
    {
        printf("Body mass index = %.2f!  is Normal",bmi);
    }
    else if(bmi >= 25 && bmi <= 29.9)
    {
        printf("Body mass index = %.2f!  is Overweight",bmi);
    }
    else
    {
        printf("Body mass index = %.2f! is Obese",bmi);
    }
    
    return 0;

}