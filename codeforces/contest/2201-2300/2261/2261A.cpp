// https://codeforces.com/contest/2261/problem/A

// 17-10-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int k = count(s.begin(), s.end(), '1');
        if (k == 1) {
            cout << 0 << '\n';
        } else if (k == 2) {
            cout << 1 << '\n';
        } else {
            cout << s.rfind('1') - s.find('1') << '\n';
        }
    }
}