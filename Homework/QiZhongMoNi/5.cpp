#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ll n0, n1, n, minn = 200000000, index;
    cin >> n0 >> n1 >> n;
    bool huan = false, found = false;
    if (n0 < n1)
    {
        ll temp = n0;
        n0 = n1;
        n1 = temp;
        huan = true;
    }
    for (int i = 2; i <= n1; i++)
    {
        ll fang = n - n1 / i;
        if (n1 % i != 0)
            continue;
        if (fang < 0)
            continue;
        if (n0 % fang != 0 || n0 == fang)
        {
            continue;
            ;
        }
        else
        {
            ll ren = n0 / fang;
            minn = min(minn, abs(ren - i));
            if (minn == abs(ren - i))
            {
                index = fang;
                found = true;
            }
        }
    }
    if (!found)
    {
        cout << "No Solution";
        return 0;
    }
    else if (huan)
    {
        cout << n - index << " " << index;
    }
    else
        cout << index << " " << n - index;
}