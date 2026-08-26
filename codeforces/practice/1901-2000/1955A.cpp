// https://codeforces.com/contest/1955/problem/A

// 26-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        if (a * 2 > b) {
            int one = n % 2;
            int two = n / 2;

            cout << one * a + two * b << endl;
        } else {
            cout << n * a << endl;
        }
    }

    return 0;
}