#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll=long long;

/*
Logic

The following code goes through the string from left to right and maintains two variables: 
curr is the length of a repetition that ends at the current position,
and ans is the maximum repetition length seen so far.
*/

int main() {
    string s; cin>>s;
    int curr=1,ans=1;       
    // Initialize answer to 1, otherwise for s="A" you will get wrong output as loop is never initiated

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