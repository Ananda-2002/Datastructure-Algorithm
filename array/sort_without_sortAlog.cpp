#include <iostream>
using namespace std;
void traversal(int *arr, int l)
{
    for (int i = 0; i < l; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void arrange(int *arr, int l)
{
    int num0 = 0, num1 = 0, num2 = 0;
    for (int i = 0; i < l; i++)
    {
        if (arr[i] == 0)
        {
            num0++;
        }
        else if (arr[i] == 1)
        {
            num1++;
        }
        else if (arr[i] == 2)
        {
            num2++;
        }
    }
    // cout << num0 << num1 << num2;
    for (int i = 0; i < num0; i++)
    {
        arr[i] = 0;
    }
    for (int i = num0; i < (num0 + num1); i++)
    {
        arr[i] = 1;
    }
    for (int i = (num0 + num1); i < (num0 + num1 + num2); i++)
    {
        arr[i] = 2;
    }
}
int main()
{
    int a[] = {0, 1, 2, 0, 1, 2, 1};
    int l = sizeof(a) / sizeof(int);

    cout << "Displaying array" << endl;
    traversal(a, l);
    arrange(a, l);
    cout << "After re-arranging" << endl;
    traversal(a, l);
}