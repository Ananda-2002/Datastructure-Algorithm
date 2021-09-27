// Merge 2 sorted arrays without using Extra space.
#include <iostream>
using namespace std;
void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
void marge(int *arr1, int size1, int *arr2, int size2)
{
    int idx1 = 0, idx2 = 0;
    int *arr = new int[size1 + size2];
    int i = 0;
    while (idx1 != size1 && idx2 != size2)
    {
        if (arr1[idx1] < arr2[idx2])
        {
            arr[i] = arr1[idx1];
            i++;
            idx1++;
        }
        else
        {
            arr[i] = arr2[idx2];
            i++;
            idx2++;
        }
    }
    while (idx1 != size1)
    {
        arr[i] = arr1[idx1];
        i++;
        idx1++;
    }

    while (idx2 != size2)
    {
        arr[i] = arr2[idx2];
        i++;
        idx2++;
    }

    for (i = 0; i < size1 + size2; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr1[] = {0, 2, 6, 8, 9};
    int arr1_size = sizeof(arr1) / sizeof(int);

    int arr2[] = {1, 3, 5, 7};
    int arr2_size = sizeof(arr2) / sizeof(int);

    cout << "Displaying array" << endl;
    display(arr1, arr1_size);
    cout << endl;
    display(arr2, arr2_size);
    cout << endl;
    marge(arr1, arr1_size, arr2, arr2_size);
    // cout
    //     << endl;
    // cout << "after marge" << endl;
    // display(arr1, arr1_size);
    // cout << endl;
    // display(arr2, arr2_size);
}