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

void deleteElementByElement(int arr[], int *size, int capacity, int element)
{
    int i, index;
    for (i = 0; i < (*size); i++)
    {
        if (arr[i] == element)
        {
            index = i;
            break;
        }
        else
        {
            index = 0;
        }
    }
    if (index != 0)
    {
        if ((*size) == 0)
        {
            printf("Nothing to delete\n");
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
    else
    {
        printf("Element not found\n");
    }
}
int main()
{
    int capacity = 20, size = 8;
    int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8};
    traversal(arr, size);
    deleteElementByElement(arr, &size, capacity, 10);
    traversal(arr, size);
    deleteElementByElement(arr, &size, capacity, 5);
    traversal(arr, size);
    getch();
    return 0;
}