#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    bool flag = true;
    for (int i = 0; i < n && flag; i++)
    {
        for (int j = 0; j < n && flag; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                cout << arr[i] << " " << arr[j];
                flag = false;
                break;
            }
        }
    }
}