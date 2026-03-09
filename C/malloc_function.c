#include <stdio.h>
#include <stdlib.h> // Header file using malloc() ,calloc() ,realloc() and free() function
// Dynamic Memory Allocation Program
int main()
{
    int n;
    int *p;

    printf("Enter a size : ");
    scanf("%d", &n);

    p = (int *)malloc(n);

    printf("Enter a number : ");
    scanf("%d", p);

    printf("%d", *p);
    free(p); // free() function using clear memory
}
