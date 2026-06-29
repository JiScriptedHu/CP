// https://codeforces.com/contest/2075/problem/A

// 29-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        bool even = true;
        if (k % 2 != 0) {
            even = false;
        }

        int count = 0;
        if (n % 2 != 0 && !even) {
            n -= k;
            count++;
        }

        if (even) {
            count += n / k;
            if (n % k != 0) {
                count++;
            }
        } else {
            count += n / (k - 1);
            if (n % (k - 1) != 0) {
                count++;
            }
        }

        cout << count << endl;
    }
}