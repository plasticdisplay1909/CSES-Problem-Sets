#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll=long long;
using vll=vector<ll>;

int main() {
    meow

    int n; cin>>n;
    ll ans=0;
    
    // Input for first element
    int x;cin>>x;
    int curr=x;

    for (int i=1;i<n;i++) {
        int y; cin>>y;
        if (curr>y) ans+=(curr-y);
        else curr=y; 
    }

    cout<<ans;
}