#include <stdio.h>
#include <conio.h>
void traversal(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}
void deleteElementByIndex(int arr[], int *size, int capacity, int index)
{

    if ((*size) == 0)
    {
        printf("nothing to delete\n");
    }
    else
    {
        for (int i = index; i <= (*size); i++)
        {
            arr[i] = arr[i + 1];
        }

        *size -= 1;
    }
}
int main()
{
    int capacity = 20, size = 8;
    int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8};
    traversal(arr, size);
    deleteElementByIndex(arr, &size, capacity, 2);
    traversal(arr, size);
    deleteElementByIndex(arr, &size, capacity, 7);
    traversal(arr, size);
    getch();
    return 0;
}