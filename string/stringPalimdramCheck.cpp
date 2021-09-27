#include <bits/stdc++.h>
using namespace std;
int checkPalindrome(string s)
{
    int l = s.length();
    for (int i = 0; i < l; i++)
    {
        if (s[i] != s[l - 1 - i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    string s;
    cout << "Enter a string" << endl;
    getline(cin >> ws, s);
    int check = checkPalindrome(s);
    if (check)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
    return 0;
}