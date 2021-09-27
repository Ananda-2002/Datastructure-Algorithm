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
    int mx = INT_MIN, tempSum;
    for (int i = 0; i < n; i++)
    {
        tempSum += arr[i];
        if (tempSum < 0)
        {
            tempSum = 0;
        }
        mx = max(tempSum, mx);
    }
    cout << mx;

    return 0;
}