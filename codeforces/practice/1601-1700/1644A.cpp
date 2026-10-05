// https://codeforces.com/contest/1644/problem/A

// 05-10-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int r = 1;
        int g = 1;
        int b = 1;

        for (int i = 0; i < 6; i++) {
            if (s[i] == 'r') r++;
            else if (s[i] == 'g') g++;
            else if (s[i] == 'b') b++;
            else if (s[i] == 'R') r--;
            else if (s[i] == 'G') g--;
            else if (s[i] == 'B') b--;

            if (!(r && g && b)) break;
        }

        cout << (r && g && b ? "YES" : "NO") << endl;
    }

    return 0;
}