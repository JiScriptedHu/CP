// https://codeforces.com/contest/1926/problem/A

// 21-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int flag = 0;
        for (int i = 0; i < 5; i++) {
            if (s[i] == 'A') flag++;
            else flag--;
        }

        cout << (flag > 0 ? "A" : "B") << endl;
    }

    return 0;
}