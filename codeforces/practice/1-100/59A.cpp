// https://codeforces.com/contest/59/problem/A

// 30-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();
    int small = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') small++;
    }

    if (small >= n - small) {
        for (int i = 0; i < n; i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
        }
    } else {
        for (int i = 0; i < n; i++) {
            if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
        }
    }

    cout << s << endl;
    return 0;
}