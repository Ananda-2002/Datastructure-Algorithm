
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n], mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }
    int refArr[mx + 1];
    for (int i = 0; i <= mx; i++)
    {
        refArr[i] = -1;
    }
    int minIdx = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (refArr[arr[i]] != -1)
            minIdx = min(minIdx, refArr[arr[i]]);
        else
        {
            refArr[arr[i]] = i;
        }
    }
    if (minIdx == INT_MAX)
        cout << -1;
    else
        cout << minIdx;
    return 0;
}