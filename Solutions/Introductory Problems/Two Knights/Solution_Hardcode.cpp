#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll=long long;
using vll=vector<ll>;

int main() {
    meow        // Fast input output

    /*
    Logic
    For n>=4 : Number of attacking postions
        Each corner cell has 2 position
        Each cell adjacent to corner cells have 3 positions (These are 8 in number)
        Rest all of the cell on border 
    Then we calculate for n-2 region square by same logic
        Corner cell have 4 positions (Total 4 in number)
        Every other cell have 6 postions (They are 4*(n-4) in number)

    Then for all the spaces remaining have 8 attacking positions

    The answer is C(n^2,2)
    */


    int n; cin>>n;
    for (int i=1;i<=n;i++) {
        ll attack=0;                // Total number of attacking positions
        ll x=i*i;
        ll total = (x*(x-1))/2;     // Total number of cells to place two knights

        if (i==1) {cout<<0<<"\n"; continue;}
        if (i==2) {cout<<6<<"\n"; continue;}        // There is no attacking positions possible
        if (i==3) {cout<<28<<"\n"; continue;}       // For outermost layer non-corner cells have 2 attacking positions

        // For outer most layer (corners) + (adjacent to corners) + (all other)
        attack+= (2*4) + (3*8) + 4* (4*(i-1)-4-8);
        
        // For penultimate layer
        attack += (4*4) + (4*(i-2) - 8)*6;

        // For all other remaining cells
        attack += 8*((i-4)*(i-4));

        attack/=2;      // Each position is counted twice

        cout<<total-attack<<"\n";
    }
}