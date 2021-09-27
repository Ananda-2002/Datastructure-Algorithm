#include <bits/stdc++.h>
using namespace std;
string getString(char x)
{
    // string class has a constructor
    // that allows us to specify size of
    // string as first parameter and character
    // to be filled in given size as second
    // parameter.
    string s(1, x);

    return s;
}
string postfix_to_infix(string s)
{

    stack<string> st;

    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            st.push(getString(s[i]));
        }
        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^')
        {
            string op2 = st.top();
            st.pop();
            string op1 = st.top();
            st.pop();
            st.push(("(" + (op1) + (s[i]) + (op2) + ")"));
        }
    }
    return st.top();
}
int main()
{
    string s = "AB+C+D+";
    cout << postfix_to_infix(s) << endl;
    return 0;
}