#include <bits/stdc++.h>
using namespace std;


#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define all(x) (x).begin(),(x).end()

using ll=long long;
using vll=vector<ll>;
using vi=vector<int>;

ll N=2e6,MOD=1e9+7;

ll binpow(ll a, ll b) {
    ll ans=1;
    while (b>0) {
        if (b&1) ans= (ans*a)%MOD;
        a=(a*a)%MOD;
        b>>=1; // Bit shift to the right
    }
    return ans;
}

vll fact(N+1),inv(N+1);
void compute() {
    // Computation of factorials
    fact[0]=1;
    for(int i=1;i<=N;i++) fact[i]=(fact[i-1] * i)%MOD;

    // Computation of inverse factorial
    inv[N]=binpow(fact[N],MOD-2);
    for(int i=N;i>=1;i--) inv[i-1] = (inv[i]*i)%MOD;
}

int main() {
    meow
    compute();

    ll n,m; cin>>n>>m;

    ll ans=fact[n+m-1];
    ans=(ans*inv[n-1])%MOD;
    ans=(ans*inv[m])%MOD;

    cout<<ans;
}