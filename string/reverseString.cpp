#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cout << "Enter a string" << endl;
    getline(cin >> ws, s);
    int length = s.length();
    cout << "String before reverse" << endl;
    cout << s << endl;
    for (int i = 0; i < length / 2; i++)
    {
        char temp = s[i];
        s[i] = s[length - 1 - i];
        s[length - 1 - i] = temp;
    }
    cout << "String After reverse" << endl;
    cout << s << endl;
    return 0;
}