/*
input
5
1 2 3 7 5
10
output
3 4
====================================
input
4
1 2 3 8
5
output
2 3
*/
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
    int s;
    cin >> s;
    int sum = 0;
    int st = 0, end = 0;
    while (sum < s)
    {
        sum += arr[end++];
    }
    while (sum != s)
    {
        sum -= arr[st++];
    }

    cout << st + 1 << " " << end;
    return 0;
}