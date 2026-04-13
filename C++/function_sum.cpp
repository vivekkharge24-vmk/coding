// Two number sum print using function program
#include <iostream>
using namespace std;
int add(int a, int b)
{
    int sum;
    return sum = a + b;
}
int main()
{
    int x, y;
    cout << "Enter Two Numbers : ";
    cin >> x >> y;
    int sum = add(x, y);
    cout << "Sum = " << sum << endl;
    return 0;
}