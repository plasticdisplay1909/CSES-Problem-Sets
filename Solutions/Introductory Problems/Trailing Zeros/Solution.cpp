#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll=long long;


int main() {
    int n; cin>>n;
    int ans=0;

    while (n) {
        ans+=n/5;
        n/=5;
    }

    cout<<ans;
}