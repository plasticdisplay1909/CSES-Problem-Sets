/*
Logic

We can efficiently solve the problem using a vector that maintaining boolean value for each number between 1 and n: 
have we seen that number? Then, we can find the only number we have not seen.
*/

// Code
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<bool> seen(n+1);

    for (int i=1;i<=n-1;i++) {
        int x;
        cin>>x;
        seen[x] =true;
    }

    for (int i=1;i<=n;i++) {
        if (!seen[i]) {
            cout<<i<<"\n";
        }
    }
}