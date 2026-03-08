#include <stdio.h>
// Employees Records Program
struct Employees
{
    int id;
    char name[30];
    float salary;
};

int main()
{
    struct Employees s[5];

    printf("\nEnter Employees Details ");
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter a id : ");
        scanf("%d", &s[i].id);
        printf("Enter a name : ");
        scanf("%s", s[i].name);
        printf("Enter a salary : ");
        scanf("%f", &s[i].salary);
    }

    printf("\n--- Employees Records ---\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\nEmployee Id : %d", s[i].id);
        printf("\nEmployee Name : %s", s[i].name);
        printf("\nEmployee Salary : %.2f\n", s[i].salary);
    }
    return 0;
}