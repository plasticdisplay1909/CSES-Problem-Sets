#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll=long long;

int main() {
    meow        // Fast Input Output

    /*
    Logic
    Let z=max(x,y)
    Look at pattern for even and odd z

    If z is even 
    a) If column==z then cell number = z^2 - y
    b) If row==z then at row=z,column=1 ==:> Cell number is (n-1)^2 + 1 
            And for column = k we have cell number = (n-1)^2+k

    Same logic apply for z odd but in reverse
    */

    // Code
    int t; cin>>t;      // Number of test cases
    while (t--) {
        ll y,x; cin>>y>>x;

        ll z=max(y,x);      // Gives n*n square
        ll z2=z*z;          // Number of squares

        // z is even
        if (z%2==0) {
            if (y==z) {cout<<z2-x+1;}
            else {cout<<(z-1)*(z-1) + y;}
        } else {
            // For odd case
            if (x==z) {cout<<z2-y+1;}
            else {cout<<(z-1)*(z-1)+x;}
        }

        cout<<"\n";
    }
}