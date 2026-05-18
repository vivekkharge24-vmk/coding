// Find Minimum Number In Array Program
#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a element : ";
        cin >> arr[i];
    }

    int min = arr[0];

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << endl
         << "Minimum Number Is " << min << endl;
    return 0;
}