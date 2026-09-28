#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll=long long;

/*
Logic
Number is 2^n
We will use binary exponation for fast multiplication
*/

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
    int n; cin>>n;
    cout<<binpow(2,n);
    return 0;
}