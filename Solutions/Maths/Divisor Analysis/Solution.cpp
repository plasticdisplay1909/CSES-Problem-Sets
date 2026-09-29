#include <bits/stdc++.h>
using namespace std;


#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define all(x) (x).begin(),(x).end()
#define rep(i,a,b) for(int i=a;i<b;i++)

using ll=long long;
using vll=vector<ll>;

ll MOD=1e9+7;
ll powmod(ll a,ll b,ll m) {
    a%=m;
    ll ans=1;
    while (b>0) {
        if (b&1) ans=(ans*a)%m;
        a=(a*a)%m;
        b>>=1;
    }
    return ans;
}

int main() {
    meow
    int n; cin>>n;
    
    ll count=1,sum=1,prod=1;
    ll curr=1;

    rep(i,0,n) {
        ll x,k; cin>>x>>k;

        // Number of divisors
        count=(count*(k+1))%MOD;

        // Product
        ll exp1= (k*(k+1)/2) % (MOD-1);
        ll exp2= curr;

        prod = powmod(prod,k+1,MOD);
        prod = (prod * powmod(x, exp1*exp2 % (MOD-1), MOD)) % MOD;
        curr = (curr * (k+1))%(MOD-1);

        // Sum of divisors 
        // x^(k+1)-1 / x-1
        ll num=(powmod(x,k+1,MOD)-1 + MOD)%MOD;
        ll den = powmod((x-1),MOD-2,MOD);

        sum =(sum*((num * den)%MOD))%MOD;
    }


    cout<<count<<' '<<sum<<' '<<prod;
    return 0;
}