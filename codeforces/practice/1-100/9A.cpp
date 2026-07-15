// https://codeforces.com/contest/9/problem/A

// 15-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int Y, W;
    cin >> Y >> W;

    int mx = max(Y, W);

    int possible = (6 - mx) + 1;

    int x = gcd(possible, 6);

    cout << (possible / x) << "/" << (6 / x) << endl;
}