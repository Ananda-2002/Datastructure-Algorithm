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
    int mx = INT_MIN;
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            result = 0;
            for (int k = i; k <= j; k++)
            {
                // cout << arr[k];
                result += arr[k];
                mx = max(result, mx);
            }

            cout << endl;
        }
    }
    cout << mx;

    return 0;
}