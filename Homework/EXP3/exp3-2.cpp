#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num = 0;
    string a;
    char b;
    getline(cin, a);
    cin >> b;
    for (const auto &y : a)
    {
        if (y == b)
        {
            num += 1;
        }
    }
    cout << num;
}