#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ans = 1;
    int n;
    cin >> n;
    while (n != 1)
    {
        ans *= n;
        n--;
    }
    cout << ans;
}