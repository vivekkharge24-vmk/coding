// 1 To N All Even Number Sum Print Program
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter a number : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }

    cout << "1 To " << n << " All Even Number Sum : " << sum;
    return 0;
}
