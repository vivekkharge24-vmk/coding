// Factorial Program Using Function
#include <iostream>
using namespace std;
int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    int result = fact(num);

    cout << "Factorial " << num << " is " << result;
    return 0;
}