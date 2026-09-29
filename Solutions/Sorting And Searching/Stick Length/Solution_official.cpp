#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()

using vi=vector<int>;
using ll=long long;
using vll=vector<ll>;

/* 
Logic
It turns out that the optimal solution is to select x so that it is 
the median of the numbers p1,p2,p3.......
*/

int main() {
    meow
    int n; cin>>n;
    vi p(n); rep(i,0,n) cin>>p[i];

    sort(all(p));
    int tar=p[n/2];     // Median

    ll cost=0;
    rep(i,0,n) cost+=abs(tar-p[i]);
    cout<<cost;
}