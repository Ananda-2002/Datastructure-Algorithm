#include <stdio.h>
int linearSearch(int arr[], int arraySize, int element)
{
    for (int i = 0; i < arraySize; i++)
    {
        if (arr[i] == element)
        {
            printf("Element found at %d index\n", i);
                }
    }
    return 0;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 5, 9, 10}, size = sizeof(arr) / sizeof(int);
    int searchElement = 5;
    linearSearch(arr, size, searchElement);
    return 0;
}