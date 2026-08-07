// https://codeforces.com/contest/1976/problem/A

// 07-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        bool sorted = true;
        bool letter = false;

        for (int i = 1; i < n; i++) {
            if (s[i] < s[i - 1]) sorted = false;
        }

        for (char c : s) {
            if (isalpha(c)) letter = true;
            else if (letter) sorted = false;
        }

        cout << (sorted ? "YES" : "NO") << endl;
    }

    return 0;
}