#include <bits/stdc++.h>
using namespace std;
int postfix_evaluation(string s)
{
    int ans = 0;
    stack<int> st;
    for (int i = 0; i < s.size(); i++)
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
    // string s = "AB+C+D+";
    string s = "22+2+2+";
    cout << postfix_evaluation(s);
    return 0;
}