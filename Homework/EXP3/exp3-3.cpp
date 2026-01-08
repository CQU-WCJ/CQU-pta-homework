#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> a, n, m;
    long long num;
    cin >> num;
    if (num == 0)
    {
        cout << "int[] arr = new int[]{0};\n";
        cout << "int[] index = new int[]{0,0,0,0,0,0,0,0,0,0,0};";
        return 0;
    }
    while (num > 0)
    {
        a.push_back(num % 10);
        num /= 10;
    }
    reverse(a.begin(), a.end());
    n = a;
    sort(n.begin(), n.end(), [](int a, int b)
         { return a > b; });
    n.erase(unique(n.begin(), n.end()), n.end());
    for (const auto &y : a)
    {
        for (int i = 0; i < int(n.size()); i++)
        {
            if (y == n[i])
            {
                m.push_back(i);
                break;
            }
        }
    }
    cout << "int[] arr = new int[]{";
    for (int y = 0; y < int(n.size()) - 1; y++)
    {
        cout << n[y] << ",";
    }
    cout << n[n.size() - 1] << "};";
    cout << "\n";
    cout << "int[] index = new int[]{";
    for (int y = 0; y < int(m.size()) - 1; y++)
    {
        cout << m[y] << ",";
    }
    cout << m[m.size() - 1] << "};";
}