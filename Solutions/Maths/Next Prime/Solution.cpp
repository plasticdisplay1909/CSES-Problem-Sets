#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll=long long;
using vi=vector<int>;
#define all(x) (x).begin(),(x).end()
#define rep(i,a,b) for(int i=a;i<b;i++)

bool isprime(ll x){
    if (x<2) return false;
    if (x==2) return true;
    
    if (x%2==0) return false;

    for (ll d=3;d*d<=x;d+=2) if (x%d==0) return false;
    return true;
} 

int main() {
    int t; cin>>t;

    while (t--) {
        ll x; cin>>x;
        x+=1;

        if (x==2) {cout<<2<<"\n"; continue;}
        if (x%2==0) x++;

        while (not isprime(x)) x+=2;
        cout<<x<<"\n";

    }
}