#include <iostream>
using namespace std;
void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;

    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

int main()
{
    int arr[] = {1, 2, 3, -11, 4, 5};
    int arr_size = sizeof(arr) / sizeof(int);
    cout << "Before reversing" << endl;
    display(arr, arr_size);

    int sum = maxSubArraySum(arr, arr_size);
    cout << endl
         << "sum of max sub array " << sum;
}