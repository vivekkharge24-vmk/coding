// Searching Array Program
#include <iostream>
using namespace std;
int searching(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 9;
    int target;
    cout << "Enter searching element : ";
    cin >> target;

    int result = searching(arr, size, target);

    if (result >= 0)
    {
        cout << endl
             << target << " Number store in index  " << result << endl;
    }
    else
    {
        cout << endl
             << target << " Number not store in array" << endl;
    }
    return 0;
}