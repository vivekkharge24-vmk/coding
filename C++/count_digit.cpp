// Count Digit Program
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    int n = num, count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    cout << "Total digits : " << count;
    return 0;
}
