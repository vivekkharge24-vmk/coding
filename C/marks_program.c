#include<stdio.h>
int main()
{
    int marks;

    printf("Enter a marks: ");
    scanf("%d" , &marks);

    if(marks >= 75)
    {
        printf("Grade = A , First class passed ");
    }
    if(marks >= 35 && marks < 75 )
    {
        printf("Grade = B , Second class passed ");
    }
    if(marks < 35)
    {
        printf("Fail, Try again");
    }
    
    return 0;

}