#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll=long long;


/*
Logic
Look at sum of first natural number for each n
It is not possible to break odd number into 2 equal numbers

So there is no solution when n=4k+1,4k+2

If n is divisble be 4
We can pair [(1,4),(2,3)], [(5,8),(6,7)]......

If n%4==3
We can pair [(1,2),(3)] and rest of the numbers by above logic
*/

// Code
int main() {
    meow        // Fast input output

    int n; cin>>n;
    if (n%4==1 or n%4==2) {cout<<"NO\n"; return 0;}

    if (n%4==3) {
        cout<<"YES\n";
        cout<<(n+1)/2<<"\n";
        cout<<1<<' '<<2<<' ';

        int x=n/4;
        for (int i=1;i<=x;i++) cout<<4*i<<' '<<4*i+3<<' ';

        cout<<"\n";

        cout<<n-(n+1)/2<<"\n";
        cout<<3<<' ';
        for (int i=1;i<=x;i++) cout<<4*i+1<<' '<<4*i+2<<' ';

        return 0;
    }

    // Case when n is divisble by 4
    int x=n/4;
    cout<<"YES\n";
    cout<<n/2<<'\n';
    for (int i=1;i<=x;i++) cout<<4*i-3<<' '<<4*i<<' ';
    
    cout<<"\n"<<n/2<<"\n";
    for (int i=1;i<=x;i++) cout<<4*i-2<<' '<<4*i-1<<' ';
    return 0;
}