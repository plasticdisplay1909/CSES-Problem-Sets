#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()

using ll=long long;
using vll=vector<ll>;

/*
Logic
As n=20 --> 2^20 ~= 10^6
So we can check out each and every possible pair greedily
*/

int n,curr=0;       // Number of apples total, and number of apples distributed
vll a;              // Weights of apple
ll ans=1e18;

// Apple weights, Weight of group 1 and 2, Index of apple to be distributed
void gen(vll a,ll w1,ll w2,ll curr) {
    // Termination step
    if (curr==n) {
        ans=min(ans,abs(w1-w2));
        return;
    }

    // Give the apple to the first group
    w1+=a[curr];
    gen(a,w1,w2,curr+1);

    // Give the apple to second group
    w1-=a[curr];
    w2+=a[curr];
    gen(a,w1,w2,curr+1);
}

int main() {
    meow
    cin>>n;
    a.resize(n);

    rep(i,0,n) cin>>a[i];
    gen(a,0,0,0);

    cout<<ans<<"\n";
}