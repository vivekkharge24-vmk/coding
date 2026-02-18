#include<stdio.h>
int main()
{
    int ch;
    printf("--- Welcome To Vivek Restaurant ---\n");
    printf("1.Sandwich 2.Pasta 3.Pizza 4.Burger\n");
    printf("Enter your choice :");
    scanf("%d",&ch);
    
    switch(ch)
    {
        case 1:
        printf("You have ordered sandwich ");
        break;

        case 2:
        printf("You have ordered pasta ");
        break;

        case 3:
        printf("You have ordered pizza ");
        break;
        
        case 4:
        printf("You have ordered burger ");
        break;

        default:
        printf("Invaild choice ! Please Try again ");
        break;
    }
}