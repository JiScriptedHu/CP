// https://codeforces.com/contest/32/problem/B

// 01-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string out = "";
    for (int i = 0; i < s.length(); ) {
        if (s[i] == '.') {
            out += '0';
            i++;
        } else if (s[i] == '-') {
            if (s[i + 1] == '.') {
                out += '1';
                i += 2;
            } else if (s[i + 1] == '-') {
                out += '2';
                i += 2;
            }
        }
    }

    cout << out << endl;
    return 0;
}