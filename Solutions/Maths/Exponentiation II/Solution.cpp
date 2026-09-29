/*
Logic

Using Fermat's Little Theorm

a^exp (mod M) == a^(exp mod(M-1)) (mod M)
*/

#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()

using vi=vector<int>;
using ll=long long;
using vll=vector<ll>;

ll MOD=1e9+7;

ll powmod(ll a, ll b, ll m) {
    a%=m;
    ll ans=1;
    while (b>0) {
        if (b&1) ans=(ans*a)%m;
        a=(a*a)%m;
        b>>=1;
    }
    return ans;
}

void solve() {
    ll a,b,c; cin>>a>>b>>c;
    ll exp=powmod(b,c,MOD-1);
    cout<<powmod(a,exp,MOD)<<"\n";
}

int main() {
    meow

    int t; cin>>t;
    while (t--) solve();

    return 0;
}