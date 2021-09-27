#include <iostream>
using namespace std;
void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
void reverse(int *arr, int size)
{
    int mid = size / 2;
    int lastIndex = size - 1;
    for (int i = 0; i < mid; i++)
    {
        int temp = arr[i];
        arr[i] = arr[lastIndex];
        arr[lastIndex] = temp;
        lastIndex--;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int arr_size = sizeof(arr) / sizeof(int);
    cout << "Before reversing" << endl;
    display(arr, arr_size);
    reverse(arr, arr_size);
    cout << endl
         << "after reversing" << endl;
    display(arr, arr_size);
}