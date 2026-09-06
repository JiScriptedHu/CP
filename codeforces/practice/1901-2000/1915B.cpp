// https://codeforces.com/contest/1915/problem/B

// 06-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<int> a(3, 0);

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                char x;
                cin >> x;

                if (x == 'A') a[0]++;
                else if (x == 'B') a[1]++;
                else if (x == 'C') a[2]++;
            }
        }

        if (a[0] == 2) cout << "A" << endl;
        else if (a[1] == 2) cout << "B" << endl;
        else cout << "C" << endl;
    }

    return 0;
}