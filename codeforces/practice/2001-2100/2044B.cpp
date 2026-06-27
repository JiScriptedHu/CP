// https://codeforces.com/contest/2044/problem/B

// 27-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string a;
        cin >> a;

        string b = "";
        for (int i = (a.length() - 1); i > -1; i--) {
            if (a[i] == 'p') {
                b += 'q';
            } else if (a[i] == 'q') {
                b += 'p';
            } else {
                b += 'w';
            }
        }

        cout << b << endl;
    }
}