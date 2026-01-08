#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.141592653589793

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll r;
    cout << "请输入圆的半径:";
    cin >> r;
    cout << "周长:" << fixed << setprecision(2) << 2 * PI * r << ",面积:" << fixed << setprecision(3) << PI * r * r;
}
