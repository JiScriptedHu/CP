// https://codeforces.com/contest/1981/problem/A

// 13-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int l, r;
        cin >> l >> r;

        int score = 0;
        int product = 1;
        while (product * 2 <= r) {
            product *= 2;
            score++;
        }

        cout << score << endl;
    }

    return 0;
}