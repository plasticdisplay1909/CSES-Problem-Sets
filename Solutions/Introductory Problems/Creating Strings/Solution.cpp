#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()

using vs=vector<string>;
using vi=vector<int>;

/*
Recursively generate the strings
*/
string s,curr;
vi a(26,0);     // Maintains frequency of charecters
vs ans;

void gen() {
    if (curr.size() == s.size()) {
        ans.push_back(curr);
        return;
    }

    rep(i,0,26) {
        if (a[i]==0) continue;
        curr.push_back('a'+i);
        a[i]--;

        gen();

        a[i]++;
        curr.pop_back();
    }
}

int main() {
    cin>>s;
    for (char c:s) a[c-'a']++;

    gen();
    cout<<ans.size()<<"\n";

    for (string s:ans) cout<<s<<"\n";
}