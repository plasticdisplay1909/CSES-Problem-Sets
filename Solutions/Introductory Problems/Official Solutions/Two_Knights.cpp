/*
It is easier to calculate the number of ways two knights can attack each other, 
Then subtract this number from the total number of ways they can be placed on the chessboard.

To find a pattern, let us first focus on the 8x8 chessboard and count, for each square,
The number of ways a knight placed on that square can attack another knight. 
It turns out that there is a clear pattern:
                2 3 4 4 4 4 3 2
                3 4 6 6 6 6 4 3
                4 6 8 8 8 8 6 4
                4 6 8 8 8 8 6 4
                4 6 8 8 8 8 6 4
                4 6 8 8 8 8 6 4
                3 4 6 6 6 6 4 3
                2 3 4 4 4 4 3 2

Using this pattern, we can efficiently solve the problem as follows.
First we count the total number of ways to place two knights on the chessboard. 
Then, we subtract the number of ways they can attack each other.
Finally, we divide the result by two to only count distinct combinations.

Note that the solution miraculously works also for n < 4 even if it assumes that there are n-4 rows and columns in inner layers.

*/

// Code
#include <iostream>
using namespace std;
using ll = long long;

ll f(ll n) {
    ll r = n * n * (n * n - 1);
    r -= 4 * 2;
    r -= 8 * 3;
    r -= 4 * 4;
    r -= (n - 4) * 4 * 4;
    r -= (n - 4) * 4 * 6;
    r -= (n - 4) * (n - 4) * 8;
    return r / 2;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << f(i) << "\n";
    }
}