// spiral matrix
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int x = n * m - 1;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int rst = 0;
    int count = 0;
    while (count <= x)
    {
        for (int i = 0 + rst; i < (m - rst) && (x >= count); i++)
        {
            cout << arr[rst][i] << " ";
            count++;
        }
        for (int i = 0 + 1 + rst; i < (n - rst) && (x >= count); i++)
        {
            cout << arr[i][m - 1 - rst] << " ";
            count++;
        }
        for (int i = m - 2 - rst; i >= (0 + rst) && (x >= count); i--)
        {
            cout << arr[n - 1 - rst][i] << " ";
            count++;
        }
        for (int i = n - 2 - rst; i >= (0 + 1 + rst) && (x >= count); i--)
        {
            cout << arr[i][rst] << " ";
            count++;
        }
        rst++;
    }

    return 0;
}