#include <stdio.h>
int binarySearch(int arr[], int length, int element)
{
    int low = 0, mid, high = length - 1;

    if (arr[low] == element)
    {
        printf("Element found at 0th index\n");
    }
    else if (arr[high] == element)
    {
        printf("Element found at %d index\n", high);
    }
    else
    {
        while (low <= high)
        {
            mid = (high + low) / 2;
            if (arr[mid] == element)
            {
                printf("Element found at %d index\n", mid);
            }
            if (arr[mid] < element)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    int arr[] = {0, 1, 2, 3, 4, 4, 5, 6, 7, 8, 9, 10};
    int searchElement = 4, size = sizeof(arr) / sizeof(int);
    binarySearch(arr, size, searchElement);
    getch();
    return 0;
}
