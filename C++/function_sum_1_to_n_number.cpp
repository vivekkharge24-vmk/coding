// 1 To N Number Sum Print Using Function Program
#include <iostream>
using namespace std;
int sum(int n)
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
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int result = sum(n);
    cout << "Sum = " << result << endl;
    return 0;
}