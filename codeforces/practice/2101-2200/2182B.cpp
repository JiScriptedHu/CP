// https://codeforces.com/contest/2182/problem/B

// 24-06-2026
#include <bits/stdc++.h>
using namespace std;

int order(int x, int y) {
    int i = 1;
    int count = 0;

    while (true) {
        if (!(i > x)) {
            x -= i;
            i *= 2;
            count++;
        } else {
            break;
        }
        if (!(i > y)) {
            y -= i;
            i *= 2;
            count++;
        } else {
            break;
        }
    }

    return count;
};

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        cout << max(order(a, b), order(b, a)) << endl;
    }
}