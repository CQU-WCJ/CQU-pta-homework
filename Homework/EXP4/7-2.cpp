#include <bits/stdc++.h>
using namespace std;

int getm(int a)
{
    set<int> k;
    for (int i = 0; i < 4; i++)
    {
        k.insert(a % 10);
        a /= 10;
    }
    return k.size();
}

int main()
{
    int x, y;
    cin >> x >> y;
    for (int i = x; i <= 4000; i++)
    {
        if (getm(i) == y)
        {
            cout << i - x << " " << setfill('0') << setw(4) << i;
            break;
        }
    }
}