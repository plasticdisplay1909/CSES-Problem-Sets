#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll=long long;

int main() {
    meow        // Fast input output
    ll n; cin>>n;       // Using long long just in case to avoid overflow
    cout<<n<<' ';

    // This is also a Collatz conjecture that it will eventually come out to be 1
    while (n>1) {
        if (n%2==0) {n/=2; cout<<n<<' ';}
        else {n=(3*n+1); cout<<n<<' ';}
    }
    return 0;
}