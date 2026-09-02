// https://codeforces.com/contest/1913/problem/A

// 02-09-2026
// https://codeforces.com/contest/1913/problem/A

// 02-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        bool found = false;

        int i = s.length() / 2;

        while (i > 0 && !found) {
            if (s[i] != '0') {
                string sa = s.substr(0, i);
                string sb = s.substr(i);

                long long a = stoll(sa);
                long long b = stoll(sb);

                if (a < b) {
                    cout << a << ' ' << b << endl;
                    found = true;
                }
            }

            i--;
        }

        if (!found) cout << -1 << endl;
    }

    return 0;
}