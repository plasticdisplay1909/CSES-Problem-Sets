#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll=long long;
using vll=vector<ll>;

int main() {
    meow        // Fast Input Output

    /*
    Logic
    Just print all the even numbers and then odd numbers in increasing order
    For n<4
    If n=2,3 Then there is no possible permutations
    For all others this logic works
    */

    // Code
    int n; cin>>n;
    
    // No solution cases
    if (n==2 or n==3) {cout<<"NO SOLUTION"; return 0;}
    
    for (int i=2;i<=n;i+=2) cout<<i<<' ';
    for (int i=1;i<=n;i+=2) cout<<i<<' ';
}