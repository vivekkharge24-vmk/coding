#include <stdio.h>
#include <string.h>
// Union Program
union student
{
    int rollno;
    char name[30];
    float per;
};
int main()
{
    union student s1, s2;

    printf("\nFirst Student Details");
    s1.rollno = 45;
    printf("\nroll no : %d", s1.rollno);
    strcpy(s1.name, "vivek");
    printf("\nname : %s", s1.name);
    s1.per = 85.23;
    printf("\npercentage : %.2f\n", s1.per);

    printf("\nSecond Student Details\n");
    s2.rollno = 34;
    printf("roll no : %d", s2.rollno);
    strcpy(s2.name, "gaurav");
    printf("\nname : %s", s2.name);
    s2.per = 78.23;
    printf("\npercentage : %.2f", s2.per);
}