#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    bool found = false;
    for (int i = 0; i < n; i++)
    {
        long long max_ = a[i][0];
        for (int j = 1; j < n; j++)
        {
            if (a[i][j] > max_)
            {
                max_ = a[i][j];
            }
        }

        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == max_)
            {
                bool is = true;
                for (int k = 0; k < n; k++)
                {
                    if (a[k][j] < max_)
                    {
                        is = false;
                        break;
                    }
                }
                if (is)
                {
                    cout << i << " " << j << endl;
                    found = true;
                    break;
                }
            }
        }
        if (found)
            break;
    }
    if (!found)
    {
        cout << "NONE" << endl;
    }
    return 0;
}