#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<ll> n1;
    unordered_map<ll, ll> ans;
    ll n, num;

    cin >> n;
    unordered_set<ll> w;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (w.count(num) == 0)
        {
            w.insert(num);
            n1.push_back(num);
            ans[num] = 1;
        }
    }

    cin >> n;
    set<ll> h;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (h.count(num) == 0)
        {
            h.insert(num);

            if (ans.find(num) != ans.end())
            {
                ans[num] = 2;
            }
            else
            {
                n1.push_back(num);
                ans[num] = 3;
            }
        }
    }

    for (auto &y : n1)
    {
        if (ans[y] == 1 || ans[y] == 3)
        {
            cout << y << " ";
        }
    }

    return 0;
}