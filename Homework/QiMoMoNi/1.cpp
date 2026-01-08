#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll a, b;
    cin >> a >> b;
    if (a % b == 0)
    {
        cout << a + b;
    }
    else
        cout << a - b;
}