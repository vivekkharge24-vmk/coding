#include <stdio.h>
// User Input Structure Program
struct student
{
    int rollno;
    char name[30];
    float per;
};
int main()
{
    struct student s[3];

    printf("\nStudent Details : ");
    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter a name : ");
        scanf("%s", s[i].name);
        printf("Enter a rollno : ");
        scanf("%d", &s[i].rollno);
        printf("Enter a percentage : ");
        scanf("%f", &s[i].per);
    }
    printf("\n--- Student Records ---\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\nstudent name : %s", s[i].name);
        printf("\nstudent rollno : %d", s[i].rollno);
        printf("\nstudent percentage : %.2f\n", s[i].per);
    }
    return 0;
}