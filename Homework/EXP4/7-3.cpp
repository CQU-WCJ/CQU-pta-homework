#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool issu(ll a)
{
    for (ll i = 2; i <= sqrt(a) + 1; i++)
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
    ll a, k;
    cin >> a;
    for (ll i = 2; i <= sqrt(a); i++)
    {
        k = i;
        if (issu(i))
        {
            if (issu(a - i))
            {
                break;
            }
        }
    }
    cout << a << " = " << k << " + " << a - k;
}