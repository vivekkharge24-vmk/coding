// Find Sum And Product In Array Program
#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 9;
    int ch;
    cout << "Enter 1 For Sum Of Array " << endl;
    cout << "Enter 2 For Product Of Array " << endl;
    cout << endl
         << "Enter a choice : ";
    cin >> ch;

    if (ch == 1)
    {
        int sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += arr[i];
        }
        cout << endl
             << "Sum Of Array : " << sum << endl;
    }
    else if (ch == 2)
    {
        int product = 1;
        for (int i = 0; i < size; i++)
        {
            product *= arr[i];
        }
        cout << endl
             << "Product Of Array : " << product << endl;
    }
    else
    {
        cout << endl
             << "Invalid Choice ! Please Select 1 Or 2 Numbers ";
    }
    return 0;
}