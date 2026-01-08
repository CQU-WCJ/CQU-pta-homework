#include <iostream>
using namespace std;

int main()
{
    int N, count;
    cin >> N;
    count = N;
    int a[10] = {0}, b[10] = {0};
    a[0] = 1;
    b[0] = 1;
    for (int i = 0; i < N; i++)
    {
        cout << " ";
    }
    cout << "  1\n";
    count--;
    for (int i = 1; i < N; i++)
    {
        for (int p = 0; p < count; p++)
        {
            cout << " ";
        }
        count--;
        cout << "  1";
        for (int j = 1; j < i + 1; j++)
        {
            b[j] = a[j - 1] + a[j];
            if (b[j] < 10)
                cout << "   " << b[j];
            else if (b[j] < 100)
                cout << "  " << b[j];
            else
                cout << " " << b[j];
        }
        cout << "\n";
        for (int j = 1; j < i + 1; j++)
        {
            a[j] = b[j];
        }
    }
}