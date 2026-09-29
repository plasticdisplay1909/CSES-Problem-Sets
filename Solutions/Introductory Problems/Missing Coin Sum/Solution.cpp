#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()

using vi=vector<int>;
using ll=long long;
using vll=vector<ll>;

int main() {
    meow;
    int n; cin>>n;
    vll a(n); rep(i,0,n) cin>>a[i];

    sort(all(a));
    
    ll k=0;
    for (int i=0;i<n;i++) {
        // Can we make sum==k+1

        // If arr[i]>k+1 then no
        if (a[i]>k+1) {cout<<k+1; return 0;}

        // Is it possible to make all in [0,arr[i]+k]
        k+=a[i];
    }
    // We can make all in [1,sum[arr]]
    // So answer is sum(arr)+1
    cout<<k+1;
    return 0;
}