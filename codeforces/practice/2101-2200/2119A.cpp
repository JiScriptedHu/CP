// https://codeforces.com/contest/2119/problem/A

// 20-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, x, y;
        cin >> a >> b >> x >> y;

        int cost = 0;

        while (a != b) {
            if (b > a && a % 2 == 0 && x > y) {
                a++;
                cost += y;
            } else if (b > a) {
                a++;
                cost += x;
            } else if (a - 1 == b && a % 2 == 1) {
                a--;
                cost += y;
            } else {
                break;
            }
        }

        if (a == b) {
            cout << cost << endl;
        } else {
            cout << -1 << endl;
        }
    }
}