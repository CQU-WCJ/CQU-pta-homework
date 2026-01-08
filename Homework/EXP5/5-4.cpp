#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    while (n--)
    {
        string s;
        cin >> s;

        stack<char> st;
        bool valid = true;

        for (int i = 0; i < s.length(); i++)
        {
            char c = s[i];

            if (c == '(' || c == '[' || c == '{')
            {
                st.push(c);
            }

            else
            {
                if (st.empty())
                {
                    valid = false;
                    break;
                }

                char top = st.top();

                if ((c == ')' && top == '(') ||
                    (c == ']' && top == '[') ||
                    (c == '}' && top == '{'))
                {
                    st.pop();
                }
                else
                {
                    valid = false;
                    break;
                }
            }
        }

        if (valid && st.empty())
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}