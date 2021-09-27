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

int main()
{

    getch();
    return 0;
}