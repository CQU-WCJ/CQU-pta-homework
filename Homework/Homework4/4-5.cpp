#include <iostream>
using namespace std;

int main()
{
    long double a1, a2, b1, b2;
    char io;
    cin >> a1 >> io >> a2 >> b1 >> io >> b2;
    if (a1 / a2 > b1 / b2)
    {
        cout << a1 << "/" << a2 << " > " << b1 << "/" << b2;
    }
    if (a1 / a2 == b1 / b2)
    {
        cout << a1 << "/" << a2 << " = " << b1 << "/" << b2;
    }
    if (a1 / a2 < b1 / b2)
    {
        cout << a1 << "/" << a2 << " < " << b1 << "/" << b2;
    }
}