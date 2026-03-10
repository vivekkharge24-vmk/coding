#include <stdio.h>
#include <stdlib.h>
// Array Using Calloc() Function Program
int main()
{
    int n;
    printf("Enter a size : ");
    scanf("%d", &n);

    int *p;
    p = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter a Number : ");
        scanf("%d", &p[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {

        printf("Store a number 0[%d]  : %d\n", i, *(p + i));
    }

    free(p);
    return 0;
}