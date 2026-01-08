#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool issu(ll a)
{
    if (a < 2)
        return false;
    if (a == 2)
        return true;
    if (a % 2 == 0)
        return false;

    for (ll i = 3; i <= sqrt(a); i += 2)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ll L, K;
    cin >> L >> K;
    string s;
    cin >> s;

    for (int i = 0; i <= L - K; i++)
    {
        string sub = s.substr(i, K);
        ll num = stoll(sub);
        if (issu(num))
        {
            cout << sub;
            return 0;
        }
    }
    cout << "404";
}