#include<stdio.h>
// String Program 
int main()
{
    char str[10];
    printf("Enter a string : ");
    // scanf("%s",str); // scanf not space reading and buffer overflow
    
   // gets(str); // gets reading with space and buffer overflow

   fgets(str,sizeof(str),stdin); // fgets reading with space and not buffer overflow
    printf("%s",str);
}