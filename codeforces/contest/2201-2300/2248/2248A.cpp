// https://codeforces.com/contest/2248/problem/A

// 01-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;


        string copy = "";

        int skip = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '0' && skip == 0) {
                skip++;
            } else {
                copy += s[i];
            }
        }

        s = copy;
        copy = "";

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '1' && skip == 1) {
                skip--;
            } else {
                copy += s[i];
            }
        }

        s = copy;

        cout << s << endl;
    }
}