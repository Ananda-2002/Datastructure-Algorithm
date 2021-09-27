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

int find_union(int *arr1, int l1, int *arr2, int l2)
{
    int flag = 1;
    int u = l1 + l2;
    for (int i = 0; i < l1; i++)
    {
        cout << arr1[i] << " ";
    }
    for (int i = 0; i < l2; i++)
    {
        flag = 1;
        for (int j = 0; j < l1; j++)
        {
            if (arr2[i] == arr1[j])
            {
                u--;
                flag = 0;
            }
        }
        if (flag)
            cout << arr2[i] << " ";
    }
    cout << endl;
    return u;
}
int find_interSection(int *arr1, int l1, int *arr2, int l2)
{
    int isc;
    if (l1 >= l2)
    {
        for (int i = 0; i < l1; i++)
        {
            for (int j = 0; j < l2; j++)
            {
                if (arr1[i] == arr2[j])
                {
                    cout << arr1[i] << " ";
                    isc++;
                }
            }
        }
    }
    else
    {
        for (int i = 0; i < l2; i++)
        {
            for (int j = 0; j < l1; j++)
            {
                if (arr2[i] == arr1[j])
                {
                    cout << arr2[i] << " ";
                    isc++;
                }
            }
        }
    }
    cout << endl;
    return isc;
}
int main()
{
    // int a[] = {1, 2, 5, 4, 8};
    // int l = sizeof(a) / sizeof(int);
    int l1;
    cout << "Enter of the first array length" << endl;
    cin >> l1;
    int *a1 = new int[l1];
    cout << "Enter first array Element" << endl;
    for (int i = 0; i < l1; i++)
    {
        cin >> a1[i];
    }

    // ==============================

    int l2;
    cout << "Enter of the second array length" << endl;
    cin >> l2;
    int *a2 = new int[l2];
    cout << "Enter first array Element" << endl;
    for (int i = 0; i < l2; i++)
    {
        cin >> a2[i];
    }

    cout << "displaying first array" << endl;
    traversal(a1, l1);

    cout << "displaying second array" << endl;
    traversal(a2, l2);

    cout << "union of this two array is " << find_union(a1, l1, a2, l2) << endl;
    cout << "intersection of this two array is " << find_interSection(a1, l1, a2, l2) << endl;
}