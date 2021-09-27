#include <bits/stdc++.h>
using namespace std;

int kadane(int arr[], int n)
{
    int tempSum = 0, mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        tempSum += arr[i];
        if (tempSum < 0)
        {
            tempSum = 0;
        }
        mx = max(mx, tempSum);
    }
    return mx;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sumOfArray = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int nonwrapsum = kadane(arr, n);
    for (int i = 0; i < n; i++)
    {
        sumOfArray += arr[i];
        arr[i] = -arr[i];
    }
    int wrapsum = sumOfArray + kadane(arr, n);
    cout << max(nonwrapsum, wrapsum);
    return 0;
}