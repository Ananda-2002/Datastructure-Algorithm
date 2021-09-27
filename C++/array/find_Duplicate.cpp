// find duplicate in an array of N+1 Integers
#include <iostream>
using namespace std;
void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
int findDuplicate(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (j != i)
            {
                if (arr[i] == arr[j])
                {
                    return arr[i];
                }
            }
        }
    }
    return 0;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 5};
    int arr_size = sizeof(arr) / sizeof(int);
    cout << "Displaying array" << endl;
    display(arr, arr_size);
    int duplicateNum = findDuplicate(arr, arr_size);
    cout << "\nDuplicate number " << duplicateNum;
}

// Other way to do the same is we can sort the array and check next value will be the same os not
