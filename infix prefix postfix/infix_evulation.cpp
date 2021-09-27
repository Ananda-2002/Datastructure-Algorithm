#include <bits/stdc++.h>
using namespace std;
int infix_evaluation(string s)
{
    stack<int> st;
    int ans = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^')
        {
            int op2 = st.top();
            st.pop();
            int op1 = st.top();
            st.pop();
            switch (s[i])
            {
            case '+':
                ans = op2 + op1;
                // cout << ans << endl;
                st.push(ans);
                break;
            case '-':
                ans = op2 - op1;
                // cout << ans << endl;
                st.push(ans);
                break;
            case '*':
                ans = op2 * op1;
                // cout << ans << endl;
                st.push(ans);
                break;
            case '/':
                ans = op2 / op1;
                // cout << ans << endl;
                st.push(ans);
                break;
            case '^':
                ans = pow(op1, op2);
                st.push(ans);
                break;
            default:
                break;
            }
        }
    }
    return st.top();
}
int main()
{
    string s = "-+7*45+20";
    cout << infix_evaluation(s) << endl;
}