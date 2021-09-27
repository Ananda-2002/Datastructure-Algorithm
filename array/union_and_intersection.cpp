#include <iostream>
using namespace std;
void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
void find_union(int *arr1, int size1, int *arr2, int size2)
{
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr2[j] << " ";
            }
        }
    }
}
void find_intersection(int *arr1, int size1, int *arr2, int size2)
{
    for (int i = 0; i < size1; i++)
    {
        cout << arr1[i] << " ";
    }
    int isPresent = 1;
    for (int j = 0; j < size2; j++)
    {
        for (int i = 0; i < size1; i++)
        {
            if (arr2[j] == arr1[i])
            {
                isPresent = 0;
            }
        }
        if (isPresent)
        {
            cout << arr2[j] << " ";
        }
        isPresent = 1;
    }
}
int main()
{
    int arr1[] = {3, 4, 5, 6, 7, 8};
    int arr1_size = sizeof(arr1) / sizeof(int);

    int arr2[] = {1, 2, 3, 4, 5};
    int arr2_size = sizeof(arr2) / sizeof(int);

    cout << "Before reversing" << endl;
    display(arr1, arr1_size);
    cout << endl;
    display(arr2, arr2_size);
    cout << endl;
    cout << "Union ";
    find_union(arr1, arr1_size, arr2, arr2_size);
    cout << endl;
    cout << "intersection ";
    find_intersection(arr1, arr1_size, arr2, arr2_size);
}