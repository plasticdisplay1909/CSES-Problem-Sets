#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()

using vi=vector<int>;
using ll=long long;
using vll=vector<ll>;

ll cost(vll x,ll k) {
    ll ans=0;
    for (ll s:x) ans+=abs(s-k);
    return ans;
}

int main() {
    meow
    int n; cin>>n;

    vll x(n); rep(i,0,n) cin>>x[i];
    ll low=1,high=*max_element(all(x));

    while (low<high) {
        ll mid=low + (high-low)/2;

        if (cost(x,mid) < cost(x,mid+1)) high=mid;
        else low=mid+1;
    }

    cout<<cost(x,low);
}