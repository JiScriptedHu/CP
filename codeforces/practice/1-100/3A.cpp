// https://codeforces.com/contest/3/problem/A

// 29-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int x = t[0] - s[0];
    int y = t[1] - s[1];

    cout << max(abs(x), abs(y)) << endl;

    while (x || y) {
        string move = "";

        if (x > 0) {
            move += 'R';
            x--;
        } else if (x < 0) {
            move += 'L';
            x++;
        }

        if (y > 0) {
            move += 'U';
            y--;
        } else if (y < 0) {
            move += 'D';
            y++;
        }

        cout << move << endl;
    }

    return 0;
}