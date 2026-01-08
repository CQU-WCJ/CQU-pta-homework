#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n, m, x, y;
    cin >> n >> m >> x >> y;
    ll amin = 1000, amax = -1000, bmin = 1000, bmax = -1000, num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        amin = min(amin, num);
        amax = max(amax, num);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> num;
        bmin = min(bmin, num);
        bmax = max(bmax, num);
    }
    bool found = 1;
    if (x < y)
    {
        if (amax >= bmin)
        {
            found = 0;
        }
    }
    else
    {
        if (bmax >= amin)
        {
            found = 0;
        }
    }
    if (found)
    {
        cout << x << " and " << y << ": impossible";
    }
    else
    {
        cout << x << " and " << y << ": possible";
    }
}