#include <stdio.h>
// Student Data Program Using File Handling
int main()
{
    FILE *fp;
    char name[30];
    int roll_no;

    fp = fopen("student.txt", "a");

    if (fp == NULL)
    {
        printf("File not existed...");
        return 1;
    }
    printf("Enter a name : ");
    scanf("%s", name);
    printf("Enter roll number : ");
    scanf("%d", &roll_no);

    fprintf(fp, "Name : %s | Roll no : %d ", name, roll_no);

    fclose(fp);
    printf("Date added to file\n");

    // reading file
    fp = fopen("student.txt", "r");
    char line[100];

    printf("\n--- All Student Records ---\n");

    while (fgets(line, sizeof(line), fp) != NULL)
    {
        printf("%s", line);
    }
    fclose(fp);
    return 0;
}