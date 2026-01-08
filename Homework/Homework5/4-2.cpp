#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<bool> su;

ll suan(ll a)
{
    ll ans = 0;
    while (a > 0)
    {
        ans += (a % 10) * (a % 10);
        a /= 10;
    }
    return ans;
}

int main()
{
    su.resize(501, 1);
    su[0] = su[1] = 0;
    for (ll i = 2; i <= 500; i++)
    {
        if (!su[i])
        {
            continue;
        }
        for (ll p = i * i; p <= 500; p += i)
        {
            su[p] = 0;
        }
    }
    ll a, b;
    cin >> a >> b;
    map<ll, ll> tu;
    for (ll i = a; i <= b; i++)
    {
        ll shu = i;
        ll ans = 0;
        set<ll> zai;
        zai.insert(shu);
        bool found = true;
        while (true)
        {
            shu = suan(shu);
            ans++;
            if (zai.count(shu) != 0)
            {
                found = false;
                break;
            }
            else if (tu[shu] != 0)
            {
                ans += tu[shu];
                tu[shu] = 0;
                break;
            }
            else if (shu == 1)
            {
                break;
            }
            zai.insert(shu);
        }
        if (found)
        {
            tu[i] = ans;
        }
    }
    for (auto &[i, o] : tu)
    {
        if (o == 0)
            continue;
        if (su[i])
        {
            cout << i << " " << 2 * o << '\n';
        }
        else
            cout << i << " " << o << '\n';
    }
}