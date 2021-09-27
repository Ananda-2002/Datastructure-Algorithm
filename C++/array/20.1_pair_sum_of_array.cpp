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
    int i = 0;     //low
    int j = n - 1; // high
    while (i < j)
    {
        if (arr[i] + arr[j] == k)
        {
            cout << arr[i] << " " << arr[j];
            break;
        }
        if (arr[i] + arr[j] > k)
        {
            j--;
        }
        if (arr[i] + arr[j] < k)
        {
            i++;
        }
    }
}