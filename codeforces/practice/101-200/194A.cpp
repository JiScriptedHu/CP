// https://codeforces.com/contest/194/problem/A

// 13-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int x = 2 * n;
    int rem = k - x;

    if (n - rem > 0) {
        cout << n - rem << endl;
    } else {
        cout << 0 << endl;
    }
}