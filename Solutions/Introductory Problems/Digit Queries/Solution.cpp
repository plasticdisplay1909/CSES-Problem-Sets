#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()

using ll=long long;
using vll=vector<ll>;

/*
Logic
For 1,2,3...-digit numbers there are 9,90*2,900*3..... digits
So till k is greater than sum 9 + 90*2 + 900*3..... we will keep on adding
Then k - sum is the i-th n-digit number
We can easily find whats required next
*/


int main() {
    meow
    int q; cin>>q;      // Number of queries

    while (q--) {
        ll k; cin>>k;

        // For 1-digit number there are 9 digits
        // For each we will do digit++,count*=10
        ll digit=1,count=9;

        ll number=1;        // Start of n-th digit number

        while (k>digit*count) {
            number*=10;

            k-=digit*count;

            digit+=1;
            count*=10;
        }

        k--;        // To make it 0-indexed
        number +=k/digit;
        int idx=k%digit;

        cout<<to_string(number)[idx]<<"\n";
    }
}