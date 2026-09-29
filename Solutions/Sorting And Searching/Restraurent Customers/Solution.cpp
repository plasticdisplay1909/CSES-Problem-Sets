#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()

using vi=vector<int>;

/*
Logic

Since all the arrival and departure times are different
(a1,d1) and (a2,d2) --> a1!=a2,d1!=d2 and ai!=dj

So the number of customer changes only occurs at integral values of times
We maintain two sorted arrays one for arrival time and the other for departure
Then we transverse through both of them using two-pointers(i,j) one for each

If a[i]<b[j] : Customer enters the restraurent
Else: The customer leaves it
Rest all of the values of time interval are useless

We have to find out the maximum number of customers at any point

*/

int main() {
    int n; cin>>n;
    
    vi a(n),b(n);
    rep(i,0,n) cin>>a[i]>>b[i];
    
    sort(all(a)),sort(all(b));

    int i=0,j=0;
    int curr=0,ans=0;
    while (i<n and j<n) {
        if (a[i]<b[j]) {curr++;i++;}
        else {curr--;j++;}

        ans=max(curr,ans);
    }

    cout<<ans;
    return 0;
}