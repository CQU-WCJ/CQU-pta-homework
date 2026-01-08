#include <iostream>
using namespace std;

int main()
{
    int n, a, b, maxn = 0;
    cin >> n >> a;
    for (int i = 1; i < n; i++)
    {
        cin >> b;
        if (b > a)
        {
            maxn = i;
            a = b;
        }
    }
    cout << a << " " << maxn;
}