#include<stdio.h>
int main()
{
    int subject;

    printf("Enter your subject \n");

    printf("Enter 1 for math \n ");
    printf("Enter 2 for science \n");
    printf("Enter 3 for both \n");
    scanf("%d",&subject);
    
   if(subject == 1 || subject == 2)
   {
    printf("Your gift is 20 rupees ");
   }
   else if (subject == 3)
   {
    printf("Your gift is 50 rupees ");
   }
   else
   {
    printf("Error:Enter a valid number");
   }
   return 0;
}