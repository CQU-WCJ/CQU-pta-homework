#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

long double getc(long double a, long double b);

int main()
{
    long double N, ans = 0;
    long double num, sum = 0, avg;
    cin >> N;
    vector<long double> a;
    for (int i = 0; i < N; i++)
    {
        cin >> num;
        sum += num;
        a.push_back(num);
    }
    avg = sum / N;
    sum = 0;
    for (const auto &y : a)
    {
        sum += getc(y, avg);
    }
    cout << fixed << setprecision(5) << sqrt(sum / N);
}
long double getc(long double a, long double b)
{
    return pow((a - b), 2);
}