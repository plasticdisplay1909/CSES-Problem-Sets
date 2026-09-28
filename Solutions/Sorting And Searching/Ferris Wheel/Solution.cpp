#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define rep(i,a,b) for(int i=a;i<b;i++)

using ll=long long;
using vi=vector<int>;
#define all(x) (x).begin(),(x).end()

/*
Logic -  Greedy Approach
Sorting the arrays and then using two-pointers
Maintain one at beginning and other at the end

If low+high < threshold continue
If high is too high, then it has to be left alone and need an own wheel

*/

int main() {
    int n,x; cin>>n>>x;

    vi a(n); rep(i,0,n) cin>>a[i];
    sort(all(a));

    int i=0,j=n-1;
    int ans=0;
    while (i<=j) {
        if (a[i]+a[j] <= x) {ans++; i++;j--;}
        else {j--; ans++;}
    }
    cout<<ans;
}