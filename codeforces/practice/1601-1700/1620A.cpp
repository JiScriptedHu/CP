// https://codeforces.com/contest/1620/problem/A

// 06-10-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int Ncount = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'N') Ncount++;
        }

        cout << (Ncount != 1 ? "YES" : "NO") << '\n';
    }

    return 0;
}