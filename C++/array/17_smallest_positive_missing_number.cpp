#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }
    bool chkArr[(int)2e6];
    for (int i = 0; i < int(2e6); i++)
    {
        chkArr[i] = false;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
            chkArr[arr[i]] = true;
    }
    int ans = -1;
    for (int i = 0; i < mx; i++)
    {
        if (!chkArr[i])
        {
            ans = i;
            break;
        }
    }
    cout << ans;

    return 0;
}