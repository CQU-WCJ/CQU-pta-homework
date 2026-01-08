#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    bool found = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[n - i - 1])
        {
            found = 0;
            break;
        }
    }
    if (found)
    {
        cout << a << " and " << b << " are reverse.";
    }
    else
    {
        cout << a << " and " << b << " are not reverse.";
    }
}