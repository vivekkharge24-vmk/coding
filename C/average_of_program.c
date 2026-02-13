#include<stdio.h>
int main()
{
    int p,c,m,b,e,total;
   
    printf("Enter a Marks:");
    scanf("%d %d %d %d %d",&p,&c,&m,&b,&e);
    
    total=p+c+m+b+e;
    printf("Total marks: %d\n",total);
    
    float avg=total/5.0;   
    printf("Average= %.2f",avg);
   
    return 0;

}