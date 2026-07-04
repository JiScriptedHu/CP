// https://codeforces.com/contest/2091/problem/A

// 04-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        int zero = 3, one = 1, two = 2, three = 1, five = 1;

        int pos = 0;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];

            if (a[i] == 0 && zero > 0) zero--;
            else if (a[i] == 1 && one > 0) one--;
            else if (a[i] == 2 && two > 0) two--;
            else if (a[i] == 3 && three > 0) three--;
            else if (a[i] == 5 && five > 0) five--;

            if ((zero + one + two + three + five) == 0 && pos == 0) {
                pos = i + 1;
            }
        }

        cout << pos << endl;
    }
}