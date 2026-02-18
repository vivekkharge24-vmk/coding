#include<stdio.h>
int main()
{
    int fruits;
    printf("1.mango 2.orange 3.banana 4.apple\n");
    printf("Enter a fruits number:");
    scanf("%d",&fruits);

    switch(fruits)
    {
        case 1:
        printf("you selected mango");
        break;

        case 2:
        printf("you selected orange");
        break;

        case 3:
        printf("you selected banana");
        break;

        case 4:
        printf("you selected apple");
        break;

        default:
        printf("Invalid choice ! please selcted 1 to 4 numbers\n");
        break;
    }
    return 0;
}