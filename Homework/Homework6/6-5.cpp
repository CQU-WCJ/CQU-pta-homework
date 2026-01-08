#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct nation
{
    ll ci = 0, qian = 0, hao;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector<nation> guo(n + 1);
    for (int i = 1; i <= n; i++)
    {
        guo[i].hao = i;
    }
    for (int i = 1; i <= n; i++)
    {
        ll k;
        cin >> k;
        while (k--)
        {
            ll h, num;
            cin >> h >> num;
            guo[h].ci++;
            guo[i].ci++;
            guo[i].qian += num;
            guo[i].qian -= num;
        }
    }
    sort(guo.begin() + 1, guo.end(), [](nation a, nation b)
         {
        if(a.qian!=b.qian){
            return a.qian>b.qian;
        }
        else if(a.ci!=b.ci){
            return a.ci>b.ci;
        }
        else return a.hao<b.hao; });
    for (int i = 1; i <= n; i++)
    {
        cout << guo[i].hao << " " << guo[i].qian << '\n';
    }
}