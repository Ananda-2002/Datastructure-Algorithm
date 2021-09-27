#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int display(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int maximum(int a[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            temp = a[i];
        }
        else
        {
            temp = a[i + 1];
        }
    }
    return temp;
}
int countSort(int a[], int size)
{
    int max = (maximum(a, size) + 1);
    // printf("max %d\n", max); // for checking parpuse
    int *helperArr = (int *)malloc(max * sizeof(int));
    for (int i = 0; i < max; i++)
    {
        helperArr[i] = 0;
    }

    for (int i = 0; i < size; i++)
    {
        int findIndex = a[i];
        helperArr[findIndex] += 1;
    }
    //display(helperArr, max);  // for checking parpuse
    int flag = 0;
    int i = 0;
    while (i <= max)
    {

        if (helperArr[i] > 0)
        {
            a[flag] = i;
            helperArr[i] -= 1;
            flag += 1;
        }
        else if (helperArr[i] == 0)
        {
            i++;
        }
    }
}
int main()
{
    int arr[5] = {10, 7, 1, 7, 18};
    int size = 5;

    display(arr, size);
    countSort(arr, size);
    display(arr, size);
}