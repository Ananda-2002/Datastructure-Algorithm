#include <stdio.h>
#include <conio.h>
// Display array
void traversal(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}
// insert array;
int insert(int arr[], int *size, int capacity, int index, int element)
{

    if ((*size) >= capacity)
    {
        printf("No space to insert\n");
    }
    else
    {
        for (int i = (*size); i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
        *size += 1;
    }
    return 1;
}
int main()
{
    int capacity = 20, size = 8;
    int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8};
    traversal(arr, size);
    insert(arr, &size, capacity, 2, 8);
    traversal(arr, size);
    insert(arr, &size, capacity, 5, 12);
    traversal(arr, size);
    getch();
    return 0;
}