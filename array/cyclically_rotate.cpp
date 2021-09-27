// Write a program to cyclically rotate an array by one.
#include <iostream>
using namespace std;
void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
void rotate(int *arr, int size, int t)
{
    while (t--)
    {
        int tempValue = arr[size - 1];
        for (int i = size - 1; i >= 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = tempValue;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int arr_size = sizeof(arr) / sizeof(int);
    int t = 2; // t is rotation by one or two or more
    cout << "Before rotation" << endl;
    display(arr, arr_size);
    rotate(arr, arr_size, t);
    cout << endl
         << "after rotation" << endl;
    display(arr, arr_size);
}