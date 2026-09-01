// https://codeforces.com/contest/1912/problem/L

// 01-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int totL = 0, totO = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'L') totL++;
        else totO++;
    }

    int ll = 0, lo = 0;
    int rl = totL, ro = totO;

    int ans = -1;

    for (int i = 0; i < n - 1; i++) {
        if (s[i] == 'L') {
            ll++;
            rl--;
        } else {
            lo++;
            ro--;
        }

        if (ll != rl && lo != ro) {
            ans = i + 1;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}