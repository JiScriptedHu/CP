// https://codeforces.com/contest/2106/problem/A

// 02-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int one = 0;
        int zero = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                one++;
            } else {
                zero++;
            }
        }
        
        one *= n - 1;
        one += zero;

        cout << one << endl;
    }
}