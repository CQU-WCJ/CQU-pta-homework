#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    string s;
    queue<string> a;
    while (n--)
    {
        cin >> s;
        queue<string> a;
        if (s.length() > 3)
        {
            string s1 = s.substr(3);
            a.push(s1);
        }
        else if (s.length() == 3)
        {
            a.pop();
        }
        else if (!a.empty())
            cout << a.front() << '\n';
        else
            cout << "NULL\n";
    }
}