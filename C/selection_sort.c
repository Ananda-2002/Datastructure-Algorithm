#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[] = {7, 11, 9, 2, 1, 17, 4};
    int size = sizeof(arr) / sizeof(int), min, j, k, minIndex;
    printf("displaying array...\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n-------------------\n");

    // selection sort algorithm
    for (j = 0; j < size; j++)
    {
        minIndex = j;
        for (k = j + 1; k < size; k++)
        {
            if (arr[minIndex] > arr[k])
            {
                minIndex = k;
            }
        }

        int temp = arr[j];
        arr[j] = arr[minIndex];
        arr[minIndex] = temp;
    }

    //  display array after sorting
    printf("array after insertion sort \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n-------------------\n");
}