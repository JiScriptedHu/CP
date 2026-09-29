// https://codeforces.com/contest/1992/problem/A

// 29-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int ab, bc, ac;

        for (int i = 0; i < 5; i++) {
            ab = a * b;
            bc = b * c;
            ac = a * c;

            if (ab > bc && ab > ac) {
                c++;
            } else {
                if (bc > ac) {
                    a++;
                } else {
                    b++;
                }
            }
        }

        cout << a * b * c << endl;
    }

    return 0;
}