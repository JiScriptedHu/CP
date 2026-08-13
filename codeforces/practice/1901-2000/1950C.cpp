// https://codeforces.com/contest/1950/problem/C

// 13-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int hr = (s[0] - '0') * 10 + (s[1] - '0');

        if (hr == 0) {
            s[0] = '1';
            s[1] = '2';
            cout << s << " AM" << endl;
        } else if (hr < 12) {
            cout << s << " AM" << endl;
        } else if (hr == 12) {
            cout << s << " PM" << endl;
        } else {
            hr %= 12;
            s[0] = (hr / 10) + '0';
            s[1] = (hr % 10) + '0';
            cout << s << " PM" << endl;
        }
    }

    return 0;
}