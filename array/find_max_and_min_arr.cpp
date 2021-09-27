#include <iostream>
using namespace std;
void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
int min(int *arr, int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int max(int *arr, int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
int main()
{
    int arr[] = {3, 2, 3, 4, 5};
    int arr_size = sizeof(arr) / sizeof(int);
    cout << "displaying array" << endl;
    display(arr, arr_size);
    cout << endl;
    cout << "min " << min(arr, arr_size) << endl;
    cout << "max " << max(arr, arr_size) << endl;
}