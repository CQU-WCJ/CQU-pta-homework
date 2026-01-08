#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
    {
        double s = a + b + c;
        s /= 2;
        cout << fixed << setprecision(2) << "area = " << sqrt(s * (s - a) * (s - b) * (s - c)) << "; ";
        cout << fixed << setprecision(2) << "perimeter = " << s * 2;
    }
    else
        cout << "These sides do not correspond to a valid triangle";
}