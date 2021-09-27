// time complexcity O(n^2)
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
    int temp = 0, minIdx = 0, maxIdx = 0;
    bool flag = true;
    for (int i = 0; i < n && flag; i++)
    {
        minIdx = i;
        temp = 0;
        for (int j = i; j < n && flag; j++)
        {
            temp += arr[j];

            if (s == temp)
            {
                maxIdx = j;
                // cout << temp;
                flag = false;
            }
        }
    }
    cout << minIdx + 1 << " " << maxIdx + 1;

    return 0;
}