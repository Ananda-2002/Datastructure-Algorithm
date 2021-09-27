#include <bits/stdc++.h>
using namespace std;
int prec(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
    return -1;
}
string infix_to_postfix(string s)
{
    stack<char> st;
    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {

        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
        {
            ans += s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^')
        {
            if (st.empty())
            {
                st.push(s[i]);
            }
            else if (prec(s[i]) > prec(st.top()))
            {
                st.push(s[i]);
            }
            else
            {
                {
                    ans += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        else if (s[i] == ')')
        {
            while ((st.top() != '(') && !st.empty())
            {
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
    }
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    return ans;
}
int main()
{
    string s;
    cin >> s;
    cout << infix_to_postfix(s);
    return 0;
}