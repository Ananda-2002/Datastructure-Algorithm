#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int currSum[n + 1];
    currSum[0] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        currSum[i] = currSum[i - 1] + arr[i - 1];
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << currSum[i];
    // }

    int sumTemp = 0;
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sumTemp = 0;
        for (int j = 0; j < n; j++)
        {
            sumTemp = currSum[i] - currSum[j];
            mx = max(sumTemp, mx);
        }
    }
    cout << mx;
}