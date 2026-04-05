//                                   Smart Voting System                                  //
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int c1 = 0, c2 = 0, c3 = 0;
int spoilt = 0;
int voted[100] = {0};

void vote()
{
    int id, choice;

    printf("Enter Voter Id : ");
    scanf("%d", &id);

    if (id < 0 || id >= 100)
    {
        printf("\nInvalid Voter Id!\n");
        system("pause");
        return;
    }

    if (voted[id] == 1)
    {
        system("color 0C");
        printf("\nYou Already Voted !\n");
        system("pause");
        return;
    }

    printf("\n--- Candidate List ---\n");
    printf("1. Vivek >>> Bjp Party \n");
    printf("2. Om >>> Congress Party\n");
    printf("3. Gaurav >>> Shiv Sena Party\n");

    printf("\nEnter Your Vote : ");
    scanf("%d", &choice);

    if (choice == 1)
        c1++;
    else if (choice == 2)
        c2++;
    else if (choice == 3)
        c3++;
    else
        spoilt++;

    voted[id] = 1;
    system("color 0A");
    printf("\nVote Recorded!\n");
    system("pause");
}

void result()
{

    char pass[20];

    printf("Enter Admin Password : ");
    scanf("%19s", pass);

    if (strcmp(pass, "admin123") == 0)
    {

        printf("\n========== Voting Result ==========\n");
        printf("\n===================================\n");
        printf(" Name      Party Name      Votes");
        printf("\n===================================\n");
        printf(" Vivek         Bjp           %d\n", c1);
        printf(" Om          Congress        %d\n", c2);
        printf(" Gaurav     Shiv Sena        %d\n", c3);
        printf(" Spoilt      Invalid         %d\n", spoilt);

        int total = c1 + c2 + c3 + spoilt;
        printf("\nTotal Votes : %d\n", total);

        FILE *fp;
        fp = fopen("voting_result.txt", "w");
        if (fp == NULL)
        {
            printf("File Error\n");
            return;
        }

        fprintf(fp, "\n---------  Voting Result ----------");
        fprintf(fp, "\n===================================\n");
        fprintf(fp, " Name      Party Name      Votes");
        fprintf(fp, "\n===================================\n");
        fprintf(fp, " Vivek         Bjp           %d\n", c1);
        fprintf(fp, " Om          Congress        %d\n", c2);
        fprintf(fp, " Gaurav     Shiv Sena        %d\n", c3);
        fprintf(fp, " Spoilt      Invalid         %d\n", spoilt);
        fprintf(fp, "\nTotal Votes : %d\n", total);

        if (c1 > c2 && c1 > c3)
        {
            printf("\n*********************************\n");
            printf("      Winner : Vivek >>> Bjp      ");
            printf("\n*********************************\n");
            system("pause");
        }
        else if (c2 > c1 && c2 > c3)
        {
            printf("\n*********************************\n");
            printf("     Winner : Om >>> Congress        ");
            printf("\n*********************************\n");
            system("pause");
        }
        else if (c3 > c1 && c3 > c2)
        {
            printf("\n*********************************\n");
            printf("  Winner : Gaurav >>> Shiv Sena      ");
            printf("\n*********************************\n");
            system("pause");
        }
        else
        {
            printf("\n*********************************\n");
            printf("         Winner : Voting Tie       ");
            printf("\n*********************************\n");
            system("pause");
        }
        fclose(fp);
    }
    else
    {
        printf("\nWrong Password !!!\n");
        system("pause");
    }
}

int main()
{
    int ch;

    while (1)
    {
        system("cls");
        system("color 0B");
        printf("\n=============================================\n");
        printf(" ---------      Voting System      --------- ");
        printf("\n=============================================\n");
        printf("1. User Panel (Vote)\n");
        printf("2. Admin Panel (Result)\n");
        printf("3. Exit\n");

        printf("\nEnter Your Choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            vote();
            break;
        case 2:
            result();
            break;
        case 3:
            return 0;
        default:

            printf("Invalid Choice\n");
            system("pause");
        }
    }
}
