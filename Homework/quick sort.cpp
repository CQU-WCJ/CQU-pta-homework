#include <iostream>
#include <utility>
using namespace std;
int px(int n[], int l, int r)
{
    int left = l, right = r;
    while (left < right)
    {
        while (n[right] >= n[l] && left < right)
            right--;
        while (n[left] <= n[l] && left < right)
            left++;
        if (left < right)
            swap(n[left], n[right]);
    }
    swap(n[left], n[l]);
    return left;
}
void qs(int n[], int l, int r)
{
    if (l >= r)
        return;
    int left = px(n, l, r);
    qs(n, l, left - 1);
    qs(n, left + 1, r);
}

int main()
{
    int n[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> n[i];
    }
    qs(n, 0, 9);
    for (int i = 0; i < 10; i++)
    {
        cout << n[i] << " ";
    }
}