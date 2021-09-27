// Find max till ith position in array
// example 1 0 5 4 6 8
//  output 1 1 5 5 6 8
// 2nd example 0 -9 1 3 -4 5
// output 0 -9 1 3 -4 5
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
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
        cout << mx << " ";
    }
    return 0;
}