// 1 To N Number Sum Print Program
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter a number : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << n << " Number Total Sum Is : " << sum;
    return 0;
}
