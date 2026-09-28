#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll=long long;

/*
Logic

Maintain a set and output size of the set
*/

int main() {
    int n; cin>>n;
    set<int> s;

    while (n--) {
        int x; cin>>x;
        s.insert(x);
    }

    cout<<s.size();
}