#include<stdio.h>
#include<string.h>

int main()
{
    int i=1;
    char name[7];
    
    while(1)
    {
    
        printf("\nEnter a name : ");
        scanf("%s",&name);

        if(strcmp(name,"gaurav")==0)
        {
           printf("Name Matched %d\n",i);
           break;
        }
        i++;
       
    } 
    return 0;
    
}