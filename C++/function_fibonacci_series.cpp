// Find Fibonacci Series Using Function Program
#include <iostream>
using namespace std;
void fibo(int n)
{
    int last = -1, prev = 1, curr = 0;
    for (int i = 0; i < n; i++)
    {

        curr = last + prev;
        cout << curr << " ";

        last = prev;
        prev = curr;
    }
}
int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    fibo(num);
    return 0;
}