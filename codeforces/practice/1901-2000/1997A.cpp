// https://codeforces.com/contest/1997/problem/A

// 25-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s, n;
        cin >> s;

        int pos = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == s[i + 1]) pos = i + 1;
        }

        n += s.substr(0, pos);

        if (s[pos] == 'z') {
            n += 'y';
            n += s.substr(pos, s.length());
        } else {
            n += s[pos] + 1;
            n += s.substr(pos, s.length());
        }

        cout << n << endl;
    }
}