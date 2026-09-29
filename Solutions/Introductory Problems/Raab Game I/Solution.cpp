#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()

using vi=vector<int>;
using ll=long long;


void solve() {
    int n,a,b; cin>>n>>a>>b;
    if (a+b>n) {cout<<"NO\n"; return ;}


    // Specific cases
    if (a==0 and b==0) {
        cout<<"YES\n";
        rep(i,1,n+1) cout<<i<<' '; cout<<"\n";
        rep(i,1,n+1) cout<<i<<' '; cout<<"\n";
        return ;
    } else if (a==0 or b==0) {cout<<"NO\n"; return ;}

    // Otherwise let x=n-a-b
    // So we will place 1,2...x same for both
    // And then there is always a solution
    // For player with greater wins we will have 1,2,3,....n
    // For other x+1,x+2.... will be rotated by some distance abs(a-b);

    vi p(n),q(n);
    rep(i,0,n) {
        p[i]=i+1,q[i]=i+1;
    }

    int x=n-a-b;
    cout<<"YES\n";      // There is always a solution for remaining cases
    rotate(q.begin()+x,q.begin()+x+a,q.end());

    for (int i:p) cout<<i<<' '; cout<<"\n";
    for (int i:q) cout<<i<<' '; cout<<"\n";
}

int main() {
    meow
    
    int t; cin>>t;      // Number of test cases;
    while (t--) solve();
}