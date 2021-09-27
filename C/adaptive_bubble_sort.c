#include <stdio.h>
#include <conio.h>
int main()
{
    int size = 6, flag = 0;
    int arr[6] = {7, 11, 9, 2, 17, 4};
    printf("displaying array...\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n-------------------\n");

    for (int j = 0; j < size; j++)
    {
        for (int k = 0; k < size; k++)
        {

            if (arr[k] > arr[k + 1])
            {
                int temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
                flag = 1;
            }
        }
        if (flag != 1)
        {
            break;
        }
    }
    printf("array after Bubble sort \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n-------------------\n");
}