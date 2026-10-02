// https://codeforces.com/contest/1633/problem/B

// 02-10-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int zero = 0;
        int one = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') zero++;
            else one++;
        }

        if (zero > one) cout << one << '\n';
        else if (zero < one) cout << zero << '\n';
        else cout << zero - 1 << '\n';
    }

    return 0;
}