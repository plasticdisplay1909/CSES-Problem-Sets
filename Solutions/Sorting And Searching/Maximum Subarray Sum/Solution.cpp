#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()

using vi=vector<int>;
using ll=long long;
using vll=vector<ll>;

int main() {
    meow

    // Input
    int n; cin>>n;
    ll sum=0;

    // Maintaining prefix sum
    vll pre(n+1,0);
    rep(i,1,n+1) {cin>>pre[i]; pre[i]+=pre[i-1];}

    ll ans=-1e18;

    // Calculating max prefix sum from i to n
    vll suff(n+1);
    suff[n]=pre[n];

    for (int i=n-1;i>=1;i--) suff[i]=max(pre[i],suff[i+1]);

    rep(i,0,n) ans=max(ans,suff[i+1]-pre[i]);
    cout<<ans;

}