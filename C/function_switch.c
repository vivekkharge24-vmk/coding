#include<stdio.h>
// switch case and function mix program

int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    int c= a-b;
    printf("Subtraction is %d",c);
}
int main()
{
    printf("Press 1 for addition\n");
    printf("Press 2 for subtraction\n");
    printf("Press 3 for end\n");

    int a,b;
    printf("\nEnter First Number :");
    scanf("%d",&a);
    printf("\nEnter Second Number :");
    scanf("%d",&b);

    while(1)
    {
        int ch;
       printf("\nEnter your choice :");
       scanf("%d",&ch);


       switch(ch)
       {
         case 1:
         {
            int r=add(a,b);
            printf("Addition is %d",r);
            break;
         }
         case 2:
         {
            sub(a,b);
            break;
         }
         case 3:
         {
            return 0;
         }
         default:
         {
            printf("Invaild choice");
         }
       }
    }
}