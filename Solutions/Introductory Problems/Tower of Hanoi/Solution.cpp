#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()

using ll=long long;

/*
Logic
*/

ll binpow(ll a, ll b) {
    ll ans=1;
    while (b>0) {
        if (b&1) ans*=a;
        a*=a;
        b>>=1; // Bit shift to the right
    }
    return ans;
}

void gen(int n,int start,int middle,int end) {
    // Base Case
    if (n==1) {
        cout<<start<<' '<<end<<"\n";
        return ;
    }

    // Top (n-1) disks start -> middle using end
    gen(n-1,start,end,middle);

    // Last tile 
    cout<<start<<' '<<end<<"\n";

    // Recursive Step
    gen(n-1,middle,start,end);
}

int main() {
    meow
    int n; cin>>n;

    // Number of steps
    cout<<binpow(2,n)-1<<"\n";

    gen(n,1,2,3);
}