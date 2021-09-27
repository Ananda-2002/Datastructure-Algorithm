// Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo
#include <iostream>
using namespace std;
void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
void sort(int *arr, int size)
{
    int count0 = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        else if (arr[i] == 1)
        {
            count1++;
        }
        else if (arr[i] == 2)
        {
            count2++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (i < count0)
        {
            arr[i] = 0;
        }
        else if (i >= count0 && i < count0 + count1)
        {
            arr[i] = 1;
        }
        else if (i >= count0 + count1)
        {
            arr[i] = 2;
        }
    }
}
int main()
{
    int arr[] = {1, 0, 2, 1, 0, 0};
    int arr_size = sizeof(arr) / sizeof(int);
    cout << "Before sorting" << endl;
    display(arr, arr_size);
    sort(arr, arr_size);
    cout << "\nafter sorting" << endl;
    display(arr, arr_size);
}