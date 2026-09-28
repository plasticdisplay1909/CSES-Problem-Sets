#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll=long long;

int main() {
    meow        // Fast Input Output

    /*
    Logic
    Let z=max(x,y)      --> This gives the n*n type-square
    Look at pattern for even and odd z

    If z is even
        a) If y==z: We are on bottom row
                Starting with z^2 at column 1, the number decreases as we move right
                Cell number = z^2 -x +1
        b) If x==z: The number of cells in inner squares is (z-1)^2
                Number increases as we move down
                Cell number = z^2 + 1

    Applying similar logic for z is odd
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