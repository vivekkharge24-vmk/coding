//                                 ATM Management System Using C Language                                          //

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct bank_user
{
    char name[30];
    int account_no;
    int pin;
    float bal;
};
int main()
{
    struct bank_user user[3] = {
        {"Vivek", 202, 1234, 20000},
        {"Gaurav", 203, 2345, 12000},
        {"Kartik", 204, 9999, 5000}};
    int amount;
    int p;
    int input_acc, found_index = -1;
    int old_pin, new_pin, confirm_pin;

    time_t t;
    struct tm *tm_info;
    char buffer[50];

    FILE *fp;
    fp = fopen("atm_history.txt", "a");

    if (fp == NULL)
    {
        printf("File Error!");
        return 0;
    }

    system("cls");
    system("color 0B");
    printf("Enter Account Number : ");
    scanf("%d", &input_acc);

    for (int j = 0; j < 3; j++)
    {
        if (user[j].account_no == input_acc)
        {
            found_index = j;
            break;
        }
    }
    if (found_index == -1)
    {
        printf("Account Not Found!\n");
        return 0;
    }
    else
    {
        printf("\n Welcome %s!\n", user[found_index].name);
    }
    system("color 09");
    printf("\n============================================");
    printf("\n         .... WELCOME TO ATM ....            ");
    printf("\n============================================\n");
    printf("1 Deposit\n");
    printf("2 Withdrawal\n");
    printf("3 Balance Check\n");
    printf("4 Pin Change\n");
    printf("5 Exit\n");

    int ch;

    while (1)
    {
        printf("\nEnter a choice : ");
        scanf("%d", &ch);

        switch (ch)
        {

        case 1:
            printf("\nEnter a amount : ");
            scanf("%d", &amount);

            for (int i = 1; i <= 3; i++)
            {
                printf("\nEnter Pin Number :");
                scanf("%d", &p);

                if (p == user[found_index].pin)
                {
                    time(&t);
                    tm_info = localtime(&t);
                    strftime(buffer, 50, "%d/%m/%Y | Time : %I:%M %p", tm_info);

                    user[found_index].bal += amount;
                    system("color 0B");
                    printf("\n******************************************");
                    printf("\nDeposit successful...\n New balance = %.2f\n", user[found_index].bal);
                    fprintf(fp, "Name : %s | Account No : %d | Amount Added : %d | Balance : %.2f | Date : %s\n ", user[found_index].name, user[found_index].account_no, amount, user[found_index].bal, buffer);
                    break;
                }
                else
                {
                    printf("Wrong Pin Please Try Again (%d/3)\n", i);
                    if (i == 3)
                    {
                        printf("\nYour card is Blocked !!!");
                        system("color 0C");
                        return 0;
                    }
                }
            }
            break;

        case 2:
            printf("\nEnter a amount : ");
            scanf("%d", &amount);

            for (int i = 1; i <= 3; i++)
            {
                printf("\nEnter Pin Number :");
                scanf("%d", &p);

                if (p == user[found_index].pin)
                {
                    if (amount > user[found_index].bal)
                    {
                        printf("Insufficient balance!\n");
                        break;
                    }
                    else
                    {
                        time(&t);
                        tm_info = localtime(&t);
                        strftime(buffer, 50, "%d/%m/%Y | Time : %I:%M %p", tm_info);

                        user[found_index].bal -= amount;
                        system("color 0A");
                        printf("\n******************************************\n");
                        printf("Withdrawal successful...\n Available balance = %.2f\n", user[found_index].bal);
                        fprintf(fp, "Name : %s | Account No : %d | Amount Withdrawal : %d | Balance : %.2f | Date : %s\n", user[found_index].name, user[found_index].account_no, amount, user[found_index].bal, buffer);
                        break;
                    }
                }
                else
                {
                    printf("Wrong Pin Please Try Again (%d/3)\n", i);
                    if (i == 3)
                    {
                        printf("\nYour card is Blocked !!!");
                        system("color 0C");
                        return 0;
                    }
                }
            }
            break;

        case 3:
        {
            for (int i = 1; i <= 3; i++)
            {
                printf("\nEnter Pin Number :");
                scanf("%d", &p);

                if (p == user[found_index].pin)
                {
                    printf("\n******************************************");
                    printf("\n Available balance = %.2f\n", user[found_index].bal);
                    break;
                }
                else
                {
                    printf("Wrong Pin Please Try Again (%d/3)\n", i);
                    if (i == 3)
                    {
                        printf("\nYour card is Blocked !!!");
                        system("color 0C");
                        return 0;
                    }
                }
            }
        }
        break;
        case 4:
        {
            int i = 1;
            while (i <= 3)
            {
                printf("\nEnter Old Pin : ");
                scanf("%d", &old_pin);

                if (old_pin == user[found_index].pin)
                {
                    while (1)
                    {
                        printf("\nEnter New Pin :");
                        scanf("%d", &new_pin);
                        printf("\nEnter Confirm Pin : ");
                        scanf("%d", &confirm_pin);

                        if (new_pin == confirm_pin)
                        {
                            system("color 0A");
                            printf("\n******************************************");
                            printf("\nPin Successfully Updated...");
                            user[found_index].pin = confirm_pin;
                            printf("\nNew Pin = %d\n", user[found_index].pin);
                            break;
                        }

                        else
                        {
                            printf("\nConfirm Pin Not Correct! Please Try Again");
                        }
                    }
                    break;
                }
                else if (3 > i)
                {
                    printf("Old Pin is Incorrect! Try Again (%d/3)\n", i);
                    i++;
                }
                else
                {
                    printf("\nYour card is Blocked !!!");
                    system("color 0C");
                    return 0;
                }
            }
        }
        break;
        case 5:
        {
            system("color 07");
            fclose(fp);
            return 0;
        }
        default:
            printf("Invalid Choice Please Try Agian");
        }
    }
    fclose(fp);
    return 0;
}
