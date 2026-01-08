#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;

int main()
{
    int N, num, maxn = INT_MIN, minn = INT_MAX, index1, index2;
    cin >> N;
    vector<int> a;
    for (int i = 0; i < N; i++)
    {
        cin >> num;
        a.push_back(num);
        maxn = max(maxn, num);
        minn = min(minn, num);
    }
    if (N == 1)
    {
        cout << a[0] << " ";
        return 0;
    }
    for (int i = 0; i < N; i++)
    {
        if (a[i] == maxn)
        {
            index1 = i;
        }
        else if (a[i] == minn)
        {
            index2 = i;
        }
    }
    swap(a[index2], a[0]);
    if (index1 == 0)
    {
        swap(a[index2], a[N - 1]);
    }
    else
        swap(a[index1], a[N - 1]);
    for (const auto &y : a)
    {
        cout << y << " ";
    }
}