#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    vector<ll> ans;
    int sum=1;
    ans.push_back(0);
    for(int i=1;i<13;i++){
        sum*=i;
        ans.push_back(sum);
    }
    int n;
    cin>>n;
    cout<<ans[n];
}