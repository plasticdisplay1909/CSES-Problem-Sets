#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()

using vi=vector<int>;
using ll=long long;
using vpli=vector<pair<ll,int>>;

int main() {
    meow

    int n; ll x; cin>>n>>x;
    vpli a(n);
    rep(i,0,n) {cin>>a[i].first; a[i].second=i+1;}

    sort(all(a));
    int l=0,r=n-1;

    while (l<r) {
        ll sum= a[l].first + a[r].first;

        if (sum==x) {
            cout<<a[l].second <<' '<<a[r].second;
            return 0;
        }

        if (sum<x) l++;
        else r--;
    }

    cout<<"IMPOSSIBLE";
    return 0;
}