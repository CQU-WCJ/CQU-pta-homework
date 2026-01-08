#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double ans = 0, n;
    cin >> n;
    for (long double i = 1; i <= n; i++)
    {
        ans += pow(-1, i - 1) * (i / (2 * i - 1));
    }
    cout << fixed << setprecision(3) << ans;
}