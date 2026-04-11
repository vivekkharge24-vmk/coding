// 1 To N All Odd Number Sum Print Program using while loop
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter a number : ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
        i++;
    }

    cout << "1 To " << n << " All Odd Number Sum : " << sum;
}
