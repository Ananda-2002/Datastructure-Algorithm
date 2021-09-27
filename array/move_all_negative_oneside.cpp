// Move all the negative elements to one side of the array
#include <iostream>
using namespace std;
void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
void arrange_negative(int *arr, int size)
{
    int nIndex = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            int temp = arr[i];
            arr[i] = arr[nIndex];
            arr[nIndex] = temp;
            nIndex++;
        }
    }
}
int main()
{
    int arr[] = {1, 2, -5, 4, -3};
    int arr_size = sizeof(arr) / sizeof(int);
    cout << "Before arranging" << endl;
    display(arr, arr_size);
    arrange_negative(arr, arr_size);
    cout << "\nafter arranging" << endl;
    display(arr, arr_size);
}