#include <stdio.h>
#include <conio.h>

int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {
        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while (i < j);

    int temp2 = a[low];
    a[low] = a[j];
    a[j] = temp2;
    return j;
}

int quickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int partitionIndex;
        partitionIndex = partition(a, low, high);
        quickSort(a, low, partitionIndex - 1);
        quickSort(a, partitionIndex + 1, high);
    }
}

int main()
{
    int arr[] = {10, 121, 18, 13, 9, 15};
    int size = sizeof(arr) / sizeof(int);
    int pivot = 0;
    int high = size - 1;
    int low = pivot + 1;
    printf("displaying array..\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n-----------------------\n");

    quickSort(arr, 0, size - 1);
    printf("displaying array after sorting..\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n-----------------------\n");

    getch();
    return 0;
}