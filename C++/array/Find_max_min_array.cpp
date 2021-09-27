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

// Max function
int max(int *arr, int l)
{
    int max = arr[0];
    for (int i = 1; i < l; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

// min function
int min(int *arr, int l)
{
    int max = arr[0];
    for (int i = 1; i < l; i++)
    {
        if (arr[i] < max)
        {
            max = arr[i];
        }
    }
    return max;
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
    cout << "Displaying array" << endl;
    traversal(a, l);
    cout << "max element in array is " << max(a, l) << endl;
    cout << "min element in array is " << min(a, l) << endl;
}