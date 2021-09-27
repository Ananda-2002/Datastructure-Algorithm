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
void sort(int *arr, int l)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int KthMax(int *arr, int l, int Kth)
{
    sort(arr, l);
    return arr[l - Kth];
}

int KthMin(int *arr, int l, int Kth)
{
    sort(arr, l);
    return arr[Kth - 1];
}

int main()
{
    // int a[] = {1, 2, 5, 4, 8};
    // int l = sizeof(a) / sizeof(int);
    int l, Kth;
    cout << "Enter length" << endl;
    cin >> l;
    int *a = new int[l];
    for (int i = 0; i < l; i++)
    {
        cin >> a[i];
    }
    cout << "Enter Kth number" << endl;
    cin >> Kth;
    cout << "Displaying array" << endl;
    traversal(a, l);
    cout << Kth << " max element of this array is " << KthMax(a, l, 2) << endl;
    cout << Kth << " min element of this array is " << KthMin(a, l, 2) << endl;
}