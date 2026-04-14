// Reverse Number Print Program
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    int n = num;
    int sum = 0;

    while (n != 0)
    {
        int a = n % 10;
        sum = sum * 10 + a;
        n = n / 10;
    }

    cout << "Reverse Number : " << sum;

    return 0;
}