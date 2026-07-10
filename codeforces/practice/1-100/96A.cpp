// https://codeforces.com/contest/96/problem/A

// 10-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();

    int l = 1;
    bool flag = true;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            l++;
        } else {
            l = 1;
        }

        if (l == 7) {
            flag = false;
            break;
        }
    }
    
    if (flag) cout << "NO" << endl;
    else cout << "YES" << endl;
    return 0;
}