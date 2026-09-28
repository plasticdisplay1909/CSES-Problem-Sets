#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll=long long;

/*
Logic
Sorting both the arrays and then using two-pointers
*/

using vi=vector<int>;
#define all(x) (x).begin(),(x).end()

int main() {
    int n,m,k; cin>>n>>m>>k;
    vi a(n),b(m);

    for (int i=0;i<n;i++) cin>>a[i];
    for (int i=0;i<m;i++) cin>>b[i];

    sort(all(a));
    sort(all(b));

    int i=0,j=0;
    int ans=0;

    while (i<n and j<m) {
        if (abs(a[i]-b[j])<=k) {i++;j++;ans++;}
        else if (a[i]>b[j]+k) j++;
        else if (b[j]>a[i]+k) i++;
    }

    cout<<ans;
}