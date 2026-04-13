// Check Prime Number Using Function Program
#include <iostream>
using namespace std;
int prime(int n)
{
    int f = 0;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            cout << n << " Is Not Prime Number" << endl;
            f++;
            break;
        }
    }
    return f;
}
int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    if (num < 2)
    {
        cout << num << " Is Not Prime Number" << endl;
    }
    else
    {
        int result = prime(num);
        if (result == 0)
        {
            cout << num << " Is Prime Number" << endl;
        }
    }
    return 0;
}