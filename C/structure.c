#include <stdio.h>
#include <string.h>
struct student
{
    int rollno;
    char name[40];
    float per;
};
int main()
{
    struct student s1;
    struct student s2;

    // Input for s1
    s1.rollno = 24;
    strcpy(s1.name, "vivek");
    s1.per = 90.50;

    // Displaying s1
    printf("rollno = %d\n", s1.rollno);
    printf("name = %s\n", s1.name);
    printf("percentage = %.2f\n", s1.per);

    // Input for s2
    printf("\nEnter details student 2\n");
    printf("Enter a rollno :  ");
    scanf("%d", &s2.rollno);
    printf("Enter a name : ");
    scanf("%s", &s2.name);
    printf("Enter a percentage : ");
    scanf("%f", &s2.per);

    // Displaying s2
    printf("\nrollno = %d\n", s2.rollno);
    printf("name = s\n", s2.name);
    printf("percentage = %.2f\n", s2.per);

    return 0;
}
