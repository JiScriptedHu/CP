// https://www.codechef.com/problems/BORROWBOOK

// 14-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(100001, 0);

        int days = 1;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            a[x] = max(a[x], days);
            days++;
        }

        int totalPenalty = 0;
        for (int i = 0; i <= 100000; i++) {
            totalPenalty += a[i];
        }

        cout << totalPenalty << endl;
    }
}
