#include<stdio.h>
int main()
{
    float percentage;
    char grade;

    printf("Enter a percentage :");
    scanf("%f",&percentage);

    if(percentage >=90)
    {
        grade = 'A';
    }
    else if(percentage >=75 && percentage < 90)
    {
        grade = 'B';
    }
    else if(percentage >=50 && percentage < 75)
    {
        grade = 'C';
    }
    else if(percentage >=35 && percentage < 50)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }
 
    printf("Grade is : %c",grade);

}