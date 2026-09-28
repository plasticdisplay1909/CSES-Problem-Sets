#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll=long long;

/*
Logic

Go through array from left to right.
If a number is smaller than the previous number, we have to increase it,

Instead of updating the elements of array each time 
We maintain an element curr which gets updated continuosly and don't need extra space
*/

// Code
int main() {
    meow

    int n; cin>>n;
    ll ans=0;
    
    // Input for first element
    int x;cin>>x;
    int curr=x;

    for (int i=1;i<n;i++) {
        int y; cin>>y;
        if (curr>y) ans+=(curr-y);
        else curr=y; 
    }

    cout<<ans;
}