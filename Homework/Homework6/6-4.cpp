#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct apple
{
    ll weigh, len;
    string no;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, num;
    cin >> n;

    vector<apple> app(n);
    map<ll, vector<apple>> lan;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        cin >> app[i].no >> app[i].weigh >> app[i].len;
        lan[num].push_back(app[i]);
    }

    for (auto &[c, apples] : lan)
    {
        if (apples.empty())
            continue;

        sort(apples.begin(), apples.end(), [](const apple &a, const apple &b)
             { return a.weigh > b.weigh; });

        cout << apples[0].no << " " << apples[0].weigh << " " << apples[0].len << '\n';
    }

    return 0;
}