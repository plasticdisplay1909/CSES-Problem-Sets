#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()

using ll=long long;


int main() {
    meow
    string s; cin>>s;

    vector<int> a(26,0);
    for (char c:s) a[c-'A']++;

    int n=s.size();
    int odd=0,oddc=-1;
    
    rep(i,0,26) {
        if (a[i]%2!=0) {
            odd++; oddc=i;
        }
    }

    if (odd>1) {cout<<"NO SOLUTION"; return 0;}
    if (n%2==0 and odd) {cout<<"NO SOLUTION"; return 0;}

    string left="",mid="";
    rep(i,0,26) left.append(a[i]/2,char('A'+i));
    if (oddc!=-1) mid.append(1,char('A'+oddc));

    string right=left;
    reverse(all(right));

    cout<<left<<mid<<right;
}