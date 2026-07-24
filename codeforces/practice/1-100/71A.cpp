// https://codeforces.com/contest/71/problem/A

// 24-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;

        int l = s.length();

        if (l < 11) {
            cout << s << endl;
        } else {
            cout << s[0] << l - 2 << s[l - 1] << endl;
        }
    }

    return 0;
}