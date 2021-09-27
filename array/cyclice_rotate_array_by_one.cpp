#include <iostream>
using namespace std;
void traversal(int *arr, int l)
{
    for (int i = 0; i < l; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void rotate(int *arr, int l, int t) //arr actual array, l = length of the array , t = number of position by clock wise
{
    while (t--)
    {
        int lastElement = arr[l - 1];
        for (int i = l; i >= 0; i--)
        {
            arr[i - 1] = arr[i - 2];
        }
        arr[0] = lastElement;
    }
}

int main()
{
    // int a[] = {1, 2, 5, 4, 8};
    // int l = sizeof(a) / sizeof(int);
    int l, t;
    cout << "Enter length" << endl;
    cin >> l;
    int *a = new int[l];
    for (int i = 0; i < l; i++)
    {
        cin >> a[i];
    }
    cout << "Enter Number of position" << endl;
    cin >> t;
    cout << "Displaying array" << endl;
    traversal(a, l);
    rotate(a, l, 1);
    cout << "after Rotation" << endl;
    traversal(a, l);
}