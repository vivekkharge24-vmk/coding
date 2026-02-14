#include<stdio.h>
int main()
{
    int bal= 10000;
    int amount;

    printf("Enter a amount : ");
    scanf("%d", &amount);

    if(amount > bal)
    {
        printf("Insufficient balance!\n");
    }
    if(amount <= bal)
    {
        bal=bal-amount;
        printf("Transcation successful !\n Available bal= %d",bal);
    }
    return 0;
}