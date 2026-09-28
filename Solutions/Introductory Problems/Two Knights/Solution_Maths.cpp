#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll=long long;


/*
Logic

First calculate the number of attacking positions and then subtract it from total number of possible placements

For two knights to be in an attacking positions the must be in 2*3 rectangle or 3*2 rectangle
For a k*k square -> Number of 2*3 rectangle is (k-1)*(k-2)
Similarly 3*2 rectangles is (k-1)*(k-2)

For each rectangle there are two attacking positions

K * *       or      * * K
* * K               K * *

So total number of attacking positions is equal to 4*(k-1)*(k-2)

*/

// Code
int main() {
    meow        // Fast input output

    // Input
    ll n; cin>>n;
    for (ll i=1;i<=n;i++) {
        ll total = ((i*i) *(i*i-1))/2;

        ll attack = 4 *(i-1)*(i-2);

        cout<<total-attack<<"\n";
    }
}