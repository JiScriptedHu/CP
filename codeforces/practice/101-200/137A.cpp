// https://codeforces.com/contest/137/problem/A

// 14-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();

    int visits = 0;
    int holding = 1;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1] && holding < 5) {
            holding++;
        } else {
            visits++;
            holding = 1;
        }
    }

    cout << visits + 1 << endl;
}