#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ll N, ans, maxn = 0;
    multiset<ll> a;
    set<ll> b;
    cin >> N;
    while (N--)
    {
        cin >> ans;
        a.insert(ans);
        b.insert(ans);
    }
    for (auto &y : b)
    {
        maxn = max(maxn, ll(a.count(y)));
        if (maxn == ll(a.count(y)))
        {
            ans = y;
        }
    }
    cout << ans << " " << maxn;
}