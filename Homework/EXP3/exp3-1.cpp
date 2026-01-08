#include <iostream>
using namespace std;

int main()
{
    int N;
    int M;
    int max;
    int xiabiao;
    cin >> N;
    int a[N] = {0};
    for (int j = 0; j < N; j++)
    {
        cin >> a[j];
        max = a[0];
    }
    for (int i = 0; i < N; i++)
    {

        if (a[i] > max)
        {
            max = a[i];
            xiabiao = i;
        }
    }
    cout << max << " " << xiabiao;
    return 0;
}