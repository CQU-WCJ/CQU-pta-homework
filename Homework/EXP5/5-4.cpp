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
        bool found = 1;
        stack<char> ans;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                ans.push(s[i]);
            }
            else if (ans.empty())
            {
                found = 0;
                break;
            }
            else if (s[i] == ')')
            {
                if (ans.top() == '(')
                {
                    ans.pop();
                }
                else
                {
                    found = 0;
                    break;
                }
            }
            else if (s[i] == ']')
            {
                if (ans.top() == '[')
                {
                    ans.pop();
                }
                else
                {
                    found = 0;
                    break;
                }
            }
            else if (s[i] == '}')
            {
                if (ans.top() == '{')
                {
                    ans.pop();
                }
                else
                    break;
            }
        }
        if (found)
        {
            cout << "Yes\n";
        }
        else
            cout << "No\n";
    }
}