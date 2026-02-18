#include<stdio.h>
int main()
{
    char grade;
    
    printf("--- Grade Checking System ---\n");
    printf("Grade is A , B , C , D , F\n");

    printf("Enter your grade:");
    scanf(" %c",&grade);

     switch(grade)
     {
        case 'A':
        case 'a':
        printf("Your percentage is 90 above, Excellent");
        break;

        case 'B':
        case 'b':
        printf("Your percentage is 75 above, Well done");
        break;

        case 'C':
        case 'c':
        printf("Your percentage is 55 above, Keep it up");
        break;

        case 'D':
        case 'd':
        printf("Your percentage is 35 above, Good");
        break;

        case 'F':
        case 'f':
        printf("Your percentage is 35 less, Better luck next time.");
        break;

        default:
        printf("Invalid grade entered ! Try again");
        break;
     }
     return 0;
}