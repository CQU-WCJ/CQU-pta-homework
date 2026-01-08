#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector<string> s;
    string s1;
    for (int i = 0; i < n; i++)
    {
        cin >> s1;
        s.push_back(s1);
    }
    sort(s.begin(), s.end());
    for (int i = s.size() - 1; i >= 0; i--)
    {
        cout << s[i];
    }
}