#include <stdio.h>
#include <conio.h>
void display(int a[], int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void marge(int a1[], int size1, int a2[], int size2, int finalArr[])
{
    int i, j, k;
    i = j = k = 0;
    printf("After marge sort \n");
    while (i < size1 && j < size2)
    {
        if (a1[i] < a2[j])
        {
            finalArr[k] = a1[i];
            i++;
            k++;
        }
        else
        {
            finalArr[k] = a2[j];
            j++;
            k++;
        }
    }
    while (i < size1)
    {
        finalArr[k] = a1[i];
        k++;
        i++;
    }

    while (j < size2)
    {
        finalArr[k] = a2[j];
        k++;
        j++;
    }
}
int main()
{
    int fArr[] = {1, 4, 7};
    int sArr[] = {2, 5, 8, 9};
    int fArrSize = sizeof(fArr) / sizeof(int);
    int sArrSize = sizeof(sArr) / sizeof(int);
    int finalArrSize = fArrSize + sArrSize;
    int finalArr[finalArrSize];
    display(fArr, fArrSize);
    display(sArr, sArrSize);
    marge(fArr, fArrSize, sArr, sArrSize, finalArr);
    display(finalArr, finalArrSize);

    getch();
    return 0;
}