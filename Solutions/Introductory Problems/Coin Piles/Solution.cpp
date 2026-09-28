#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll=long long;


int main() {
    int t; cin>>t;
    while (t--) {
        int a,b; cin>>a>>b;
        if (((a+b)%3==0) and 2*a>=b and 2*b>=a) cout<<"YES\n";
        else cout<<"NO\n";
    }
}