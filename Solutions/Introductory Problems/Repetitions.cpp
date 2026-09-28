#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll=long long;

int main() {
    string s; cin>>s;
    int curr=1,ans=1;

    char c=s[0];
    for (int i=1;i<s.size();i++) {
        if (s[i]==c) {
            curr++;
        } else{
            c=s[i];
            curr=1;
        }

        ans=max(ans,curr);
    }

    cout<<ans;
    return 0;
}