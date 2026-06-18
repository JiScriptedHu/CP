// https://codeforces.com/contest/2194/problem/A
// greedy, math, 800

// 17-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, w;
        cin >> n >> w;

        if (w == 1) {
            cout << 0 << endl;
        } else {
            int sum = 0;
            sum += (n / w) * (w - 1);
            sum += n % w;
            cout << sum << endl;
        }
    }
}