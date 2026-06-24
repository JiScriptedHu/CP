// https://codeforces.com/contest/2149/problem/A

// 24-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int countn1 = 0;
        int countz = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == -1) {
                countn1++;
            } else if (x == 0) {
                countz++;
            }
        }

        int op = 0;
        op += (countn1 % 2) * 2;
        op += countz;

        cout << op << endl;
    }
}