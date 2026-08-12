// https://codeforces.com/contest/1971/problem/B

// 12-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        bool flag = false;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] != s[0]) {
                flag = true;
                char temp = s[0];
                s[0] = s[i];
                s[i] = temp;
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
        if (flag) cout << s << endl;
    }

    return 0;
}