// https://codeforces.com/contest/1919/problem/B

// 19-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int p = 0;
        int m = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '+') p++;
            else m++;
        }

        cout << abs(p - m) << endl;
    }

    return 0;
}