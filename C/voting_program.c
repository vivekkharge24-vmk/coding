#include<stdio.h>
int main()
{
    int age;
    printf(" --- Voting Eligibility Checker ---\n");
 
    printf("Enter Your Age: ");
    scanf("%d" ,&age);

    if(age<0)
    {
        printf("Invaild Age!");
    }

    else if(age>=18)
    {
        printf("You Are Eligible For Voting");
    }
    else if(age>=12)
    {
        printf("You Are Teenager, Not Eligible For Voting");
    }
    else
    {
        printf("You Are Not Eligible For Voting");
    }

    return 0;

}
