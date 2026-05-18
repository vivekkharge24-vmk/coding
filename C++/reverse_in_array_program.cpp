// Array Reverse Program
#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {11, 12, 13, 14, 15, 16, 17, 18, 19};
    int size = 9;

    int start = 0, end = size - 1, temp;

    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    cout << endl
         << "Reverse Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}