#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int tim(string s1, string s2);

int main()
{
    int N, z = 0, a[1000], count, sum, num;
    char b[1000];
    string time[1000];
    cin >> N;
    while (z != N)
    {
        count = 0;
        sum = 0;
        num = 0;
        while (true)
        {
            cin >> a[count] >> b[count] >> time[count];
            if (a[count] == 0)
            {
                break;
            }
            count++;
        }
        for (int j = 0; j < count; j++)
        {
            if (b[j] == 'S')
            {
                for (int y = j + 1; y < count; y++)
                {
                    if (a[j] == a[y] && b[y] == 'S')
                        break;
                    else if (a[j] == a[y] && b[y] == 'E')
                    {
                        num += 1;
                        sum += tim(time[j], time[y]);
                        break;
                    }
                }
            }
        }
        int ans = (double(sum) / num) + 0.5;
        if (num == 0)
        {
            cout << "0 0" << endl;
        }
        else
        {
            cout << num << " " << ans << endl;
        }
        z++;
    }
    return 0;
}

int tim(string s1, string s2)
{
    int sum = 0;
    sum += abs((stoi(s2.substr(0, 2)) - stoi(s1.substr(0, 2)))) * 60 + ((stoi(s2.substr(3, 2)) - stoi(s1.substr(3, 2))));
    return sum;
}