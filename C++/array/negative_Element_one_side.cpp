#include <iostream>
using namespace std;
#include <bits/stdc++.h>

void traversal(int *arr, int l)
{
    for (int i = 0; i < l; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reArrange(int *arr, int l)
{
    int j = 0;
    for (int i = 0; i < l; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main()
{

    int a[] = {-12, 5, 11, -13, -5, -7, -3, -6, 6};
    int l = sizeof(a) / sizeof(int);
    // int l;
    // cout << "Enter length" << endl;
    // cin >> l;
    // int *a = new int[l];
    // for (int i = 0; i < l; i++)
    // {
    //     cin >> a[i];
    // }
    cout << "Displaying array" << endl;
    traversal(a, l);
    reArrange(a, l);
    cout << "After Arrangement" << endl;
    traversal(a, l);
}