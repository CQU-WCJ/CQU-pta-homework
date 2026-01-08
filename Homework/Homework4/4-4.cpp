#include <iostream>
using namespace std;

int main()
{
    int a[3][3], sum = 0, x, y;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
            sum += a[i][j];
            if (a[i][j] == 0)
            {
                x = i;
                y = j;
            }
        }
    }
    a[x][y] = 45 - sum;
    for (int i = 0; i < 3; i++)
    {
        cin >> x >> y;
        cout << a[x - 1][y - 1] << "\n";
    }
    cin >> sum;
    switch (sum)
    {
    case 1:
    {
        sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += a[0][i];
        }
        break;
    }
    case 2:
    {
        sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += a[1][i];
        }
        break;
    }
    case 3:
    {
        sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += a[2][i];
        }
        break;
    }
    case 4:
    {
        sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += a[i][0];
        }
        break;
    }
    case 5:
    {
        sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += a[i][1];
        }
        break;
    }
    case 6:
    {
        sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += a[i][2];
        }
        break;
    }
    case 7:
    {
        sum = a[0][0] + a[1][1] + a[2][2];
        break;
    }
    case 8:
    {
        sum = a[2][0] + a[1][1] + a[0][2];
        break;
    }
    }
    switch (sum)
    {
    case 6:
    {
        cout << "10000";
        break;
    }
    case 7:
    {
        cout << "36";
        break;
    }
    case 8:
    {
        cout << "720";
        break;
    }
    case 9:
    {
        cout << "360";
        break;
    }
    case 10:
    {
        cout << "80";
        break;
    }
    case 11:
    {
        cout << "252";
        break;
    }
    case 12:
    {
        cout << "108";
        break;
    }
    case 13:
    {
        cout << "72";
        break;
    }
    case 14:
    {
        cout << "54";
        break;
    }
    case 15:
    {
        cout << "180";
        break;
    }
    case 16:
    {
        cout << "72";
        break;
    }
    case 17:
    {
        cout << "180";
        break;
    }
    case 18:
    {
        cout << "119";
        break;
    }
    case 19:
    {
        cout << "36";
        break;
    }
    case 20:
    {
        cout << "306";
        break;
    }
    case 21:
    {
        cout << "1080";
        break;
    }
    case 22:
    {
        cout << "144";
        break;
    }
    case 23:
    {
        cout << "1800";
        break;
    }
    case 24:
    {
        cout << "3600";
        break;
    }
    }
}