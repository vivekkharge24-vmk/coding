// Grade Checking Program
#include <iostream>
using namespace std;
int main()
{
    float per;
    cout << "===== Grade Checking System =====" << endl;
    cout << "Enter a percentage : ";
    cin >> per;

    if (per >= 90 && per <= 100)
    {
        cout << "Grade : A";
    }
    else if (per >= 75 && per < 90)
    {
        cout << "Grade : B";
    }
    else if (per >= 50 && per < 75)
    {
        cout << "Grade : C";
    }
    else if (per >= 35 && per < 50)
    {
        cout << "Grade : D";
    }
    else if (per < 35)
    {
        cout << "Grade : F";
    }
    else
    {
        cout << "Invalid Percentage !";
    }
    return 0;
}