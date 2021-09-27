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
string prefix_to_infix(string s)
{
    stack<string> st;
    for (int i = (s.size() - 1); i >= 0; i--)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            st.push(getString(s[i]));
            // cout << st.top() << endl;
        }
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^')
        {
            string op2 = st.top();
            // cout << op2;
            st.pop();
            string op1 = st.top();
            st.pop();

            st.push(")" + op1 + s[i] + op2 + "(");
        }
    }
    string ans = st.top();
    reverse(ans.begin(), ans.end());
    return ans;
}
int main()
{
    string s = "*+ab+cd";
    cout << prefix_to_infix(s);
    return 0;
}