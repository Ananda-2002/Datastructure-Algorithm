#include <iostream>
using namespace std;
void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
int kth_min(int *arr, int size, int kth)
{
    int *copy_arr = arr;
    for (int i = 0; i < kth; i++)
    {
        for (int j = 0; j < size - 1; j++)
            if (copy_arr[j] < copy_arr[j + 1])
            {
                int temp = copy_arr[j];
                copy_arr[j] = copy_arr[j + 1];
                copy_arr[j + 1] = temp;
            }
    }
    return copy_arr[size - kth];
}

int kth_max(int *arr, int size, int kth)
{
    int *copy_arr = arr;
    for (int i = 0; i < kth; i++)
    {
        for (int j = 0; j < size - 1; j++)
            if (copy_arr[j] > copy_arr[j + 1])
            {
                int temp = copy_arr[j];
                copy_arr[j] = copy_arr[j + 1];
                copy_arr[j + 1] = temp;
            }
    }
    return copy_arr[size - kth];
}
int main()
{
    int arr[] = {77, 15, 88, 32, 5};
    int arr_size = sizeof(arr) / sizeof(int);
    int kth = 2;
    cout << "displaying array" << endl;
    display(arr, arr_size);
    cout << endl;
    cout << "kth_min " << kth_min(arr, arr_size, kth) << endl;
    cout << "kth_max " << kth_max(arr, arr_size, kth) << endl;
    display(arr, arr_size);
}