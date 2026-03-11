#include <stdio.h>
#include <string.h>
// Drivers Records Details Program
struct Drivers
{
    char name[30];
    int license_no;
    char route[30];
    float kms;
};

int main()
{
    struct Drivers s[4];

    printf("\nDrivers Details :\n");

    for (int i = 0; i < 4; i++)
    {
        printf("\nEnter %d Driver Details\n", i + 1);

        printf("Enter a name : ");
        scanf("%s", s[i].name);

        printf("Enter a license no : ");
        scanf("%d", &s[i].license_no);

        printf("Enter a route : ");
        scanf("%s", s[i].route);

        printf("Enter a kms : ");
        scanf("%f", &s[i].kms);
    }

    printf("\n--- Drivers Records ---\n");

    for (int i = 0; i < 4; i++)
    {
        printf("\n%d Driver Details :\n", i + 1);
        printf("Driver Name : %s\n", s[i].name);
        printf("Driver License No : %d\n", s[i].license_no);
        printf("Driver Route : %s\n", s[i].route);
        printf("Driver kms : %.2f\n", s[i].kms);
    }

    return 0;
}