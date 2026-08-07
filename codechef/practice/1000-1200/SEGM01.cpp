// https://www.codechef.com/problems/SEGM01

// 07-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int blocks = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1' && (i == 0 || s[i - 1] == '0')) blocks++;
        }

        cout << (blocks == 1 ? "YES" : "NO") << endl;
    }
}