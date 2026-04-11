// Divisible by 3 Sum Print Program
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter a number : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
        }
    }

    cout << n << " Number Total Sum Is : " << sum;
    return 0;
}
