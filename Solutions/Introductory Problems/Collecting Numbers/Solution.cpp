#include <bits/stdc++.h>
using namespace std;


#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()

using pii=pair<int,int>;
using vpii=vector<pii>;

int main() {
    meow

    int n; cin>>n;
    vpii a(n); rep(i,0,n) {cin>>a[i].first; a[i].second=i+1;}

    sort(all(a));
    int rounds=1;

    rep(i,1,n) {
        if (a[i].second<a[i-1].second) rounds++;
    }

    cout<<rounds;
    return 0;
}