#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(ll n) {
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    
    sort(s.begin(), s.end(), [](const string& a, const string& b) {
        return a + b > b + a;
    });
    
    if (s[0] == "0") {
        cout << "0\n";
        return;
    }
    
    for (const string& num : s) {
        cout << num;
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    while (cin >> n && n) {
        solve(n);
    }
    
    return 0;
}