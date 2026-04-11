// Check Prime Number Program
#include <iostream>
using namespace std;
int main()
{
    int num, f = 0;
    cout << "Enter a number : ";
    cin >> num;

    if (num < 2)
    {
        cout << num << " Number Is Not Prime Number";
    }
    else
    {
        for (int i = 2; i <= num - 1; i++)
        {
            if (num % i == 0)
            {
                cout << num << " Number Is Not Prime Number";
                f++;
                break;
            }
        }

        if (f == 0)
        {
            cout << num << " Number Is Prime Number";
        }
    }
    return 0;
}