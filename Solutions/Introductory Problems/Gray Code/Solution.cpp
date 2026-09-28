#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()

using vs=vector<string>;

/*
Logic
Let A,B,C,D be gray code of digit n-1
Then for digit n 
0A,0B,0C,0D,1D,1C,1B,1A
Will also be a Gray Code
*/

// Recursively generate string of length n
vs gen(int n) {
    // Base case 
    if (n==1) {
        return {"0","1"};
    }

    vs prev=gen(n-1);
    vs ans;

    // Create '0'+{A,B,C,D}
    for (string s:prev) ans.push_back("0"+s);
    
    // Create '1' + {D,C,B,A}
    for (int i=prev.size()-1;i>=0;i--) ans.push_back("1"+prev[i]);

    return ans;
}

int main() {
    int n; cin>>n;
    vs ans=gen(n);

    for (string s:ans) cout<<s<<"\n";
    return 0;
}