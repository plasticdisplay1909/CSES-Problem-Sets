#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()

int main() {
    meow

    int n; cin>>n;
    queue<int> q;

    for (int i=1;i<=n;i++) q.push(i);

    while (q.size()>1) {
        q.push(q.front());
        q.pop();

        cout<<q.front()<<' ';
        q.pop();
    }
    cout<<q.front();
    return 0;
}