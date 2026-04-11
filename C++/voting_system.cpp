// Voting System Program
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter Your Age : ";
    cin >> age;

    if (age <= 0)
    {
        cout << "Invalid Age !";
    }
    else if (age >= 18 && age <= 110)
    {
        cout << "You Are Eligible For Voting";
    }
    else
    {
        cout << "You Are Not Eligible For Voting";
    }
    return 0;
}