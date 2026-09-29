#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()

using vi=vector<int>;
using ll=long long;
using vll=vector<ll>;

ll MOD=1e9+7;

ll binpow(ll a, ll b) {
    ll ans=1;
    while (b>0) {
        if (b&1) ans=(ans*a)%MOD;
        a=(a*a)%MOD;
        b>>=1; // Bit shift to the right
    }
    return ans;
}

int main() {
    int t; cin>>t;
    while (t--) {
        ll a,b; cin>>a>>b;

        if (a==0) {
            if (b==0) cout<<1<<"\n";
            else cout<<0<<"\n";
        } else cout<<binpow(a,b)<<"\n";
    }
    return 0;
}