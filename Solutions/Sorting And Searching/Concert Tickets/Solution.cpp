#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll=long long;
using vi=vector<int>;
#define all(x) (x).begin(),(x).end()
#define rep(i,a,b) for(int i=a;i<b;i++)


int main() {
    int n,m; cin>>n>>m;

    multiset<int> p;        // Store all the prices
    rep(i,0,n) {int x; cin>>x; p.insert(x);}

    // Query inquiry for each customer
    rep(i,0,m) {
        int x; cin>>x;

        auto it = p.upper_bound(x);
        if (it == p.begin()) {cout<<"-1\n";}
        else{
            it--;
            cout<<*it<<"\n";
            p.erase(it);
        }
    }

}