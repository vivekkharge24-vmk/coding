#include<stdio.h>
int main()
{
    int prod,dis,final_amount;

    printf("Enter Total Shooping Amount :");
    scanf("%d",&prod);

    if(prod<=0)
    {
        printf("Invaild amount !");
    }
    else if(prod>5000)
    {
        dis=prod*0.10; // 10 % Discount 
        
    }
    else
    {
        dis=prod*0.05; // 5 % Discount
    }
    final_amount=prod-dis;
    printf("Final bill to pay %d",final_amount);
}