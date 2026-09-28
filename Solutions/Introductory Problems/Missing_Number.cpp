#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll=long long;

int main() {
    ll n; cin>>n;   
    ll sum=(n*(n+1))/2;     // This will definitely overflow for n=2*10^5 so use Long Long

    for (int i=1;i<n;i++) {int x; cin>>x; sum-=x;}

    cout<<sum;
    return 0;
}