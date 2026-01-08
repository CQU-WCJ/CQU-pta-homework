#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll r, num, n;
    cin >> n >> r;
    vector<ll> ans;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        ans.push_back(num);
    }
    if (2 * r < n)
    {
        sort(ans.begin() + r, ans.end() - r);
    }
    int an=ans.size();
    for (int i=0;i<an;i++)
    {
        cout << ans[i];
        if(i!=an-1)cout<<" ";
    }
}