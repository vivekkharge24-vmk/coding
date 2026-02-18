#include<stdio.h>
int main()
{
    int marks;
    char grade;
    printf("--- Grade And Marks Checking System ---\n");
    printf("Grade is A , B , C , F\n");
    printf("Enter a grade: ");
    scanf("%c",& grade);
    printf("\nEnter a marks : ");
    scanf("%d",&marks);
    switch (grade)
    {

     case'A':
       printf("Exallent\n");
       switch (marks)
       {
        case 90:
        printf("Your marks is 85 above");
        break;

        default:
        printf("Your marks is not 85");
        break; 
       }
       break;

     case'B':
       printf("Well done\n");
       switch(marks)
       {
        case 80:
        printf("Your marks is 75 above");
        break;
        
        default:
        printf("Your marks is not 75");
        break;
       }
       break;

       case'C':
       printf("Very good\n");
       switch(marks)
      {
        case 70:
        printf("Your marks is 65 above");
        break;

        default:
        printf("Your marks is not 65");
        break;
      }
      break;
    
       case'F':
       printf("Fail\n");
       switch(marks)
      {
        case 34:
        printf("Your marks is 35 less than");
        break;
        defult:
        printf("Better luck next time");
        break;
       }
       break;

    default :
    printf("Invaild ! Grade and marks not matching , Try again");
    }
  
}  