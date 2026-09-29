#include <bits/stdc++.h>
using namespace std;


#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define all(x) (x).begin(),(x).end()

using ll=long long;
using vll=vector<ll>;

ll N=1e6,MOD=1e9+7;
vll fact(N+1),inv(N+1);

ll binpow(ll a, ll b) {
    ll ans=1;
    while (b>0) {
        if (b&1) ans= (ans*a)%MOD;
        a=(a*a)%MOD;
        b>>=1; // Bit shift to the right
    }
    return ans;
}

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

    int n; cin>>n;

    while (n--) {
        ll a,b; cin>>a>>b;

        ll ans=fact[a];
        ans = (ans*inv[b])%MOD;
        ans = (ans*inv[a-b])%MOD;
        
        cout<<ans<<"\n";
    }
    return 0;
}