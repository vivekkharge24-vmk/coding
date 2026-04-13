// Sum Of Digit Program Using Function
#include <iostream>
using namespace std;
int sumofDigit(int n)
{
    int sum = 0;
    while (n != 0)
    {
        int a = n % 10;
        sum += a;
        n = n / 10;
    }
    return sum;
}
int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    int result = sumofDigit(num);
    cout << "Total Sum : " << result;

    return 0;
}