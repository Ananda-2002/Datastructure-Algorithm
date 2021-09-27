// sum of all sub array
// example 1 2 3
// output   20
// example 1 2 3 4
// output   50
// example 1 3 7
// output 36
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0, temp = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        temp = 0;
        for (int j = i; j < n; j++)
        {
            temp += arr[j];
            sum += temp;
        }
    }
    cout << sum;

    return 0;
}