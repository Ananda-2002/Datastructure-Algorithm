// Longest arithematic sub array
/*
An athematic array is an array that contains at least two integers and the difference between
consecutive integer are equal. for example [9,10] , [3,3,3] and [9,7,5,3] are arithematic array, while 
[1,3,3,7],[2,1,2] and [1,2,4] are not arithmetic array
other input outputs
input 9 10
output 2
input 3 3 3
output 3

input 9 7 5 3
output 4

input 10 7 4 6 8 10 11
output 4

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
    int length = 2, result = 2, startIndex = 0, endIndex = 1;
    int prevSub = arr[1] - arr[0];
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i + 1] - arr[i] == prevSub)
        {
            length++;
            result = max(result, length);
            if (result == length)
                endIndex = i + 1;
        }
        else
        {
            prevSub = arr[i + 1] - arr[i];
            length = 2;
        }
    }
    startIndex = endIndex - result + 1;
    cout << result << endl;
    cout << startIndex << " " << endIndex;

    return 0;
}