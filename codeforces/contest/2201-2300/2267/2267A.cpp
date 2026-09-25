// https://codeforces.com/contest/2267/problem/A

// 25-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        char c;
        string s;
        cin >> n >> c >> s;

        int coin = 0;
        for (int i = 0; i < (n / 2); i++) {
            if (s[i] != s[n - 1 - i]) {
                if (s[i] == c || s[n - 1 - i] == c) {
                    coin++;
                } else {
                    coin += 2;
                }
            }
        }

        cout << coin << endl;
    }
}