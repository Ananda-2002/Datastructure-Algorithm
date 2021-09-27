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
void reverse(int *arr, int l)
{
    int mid = l / 2;
    for (int i = 0; i < mid; i++)
    {
        int temp = arr[l - 1];
        arr[l - 1] = arr[i];
        arr[i] = temp;
        l--;
    }
}
int main()
{
    // int a[] = {1, 2, 5, 4, 8};
    // int l = sizeof(a) / sizeof(int);
    int l;
    cout << "Enter length" << endl;
    cin >> l;
    int *a = new int[l];
    for (int i = 0; i < l; i++)
    {
        cin >> a[i];
    }
    cout << "Before reversing" << endl;
    traversal(a, l);
    reverse(a, l);
    cout << "After reversing" << endl;
    traversal(a, l);
}