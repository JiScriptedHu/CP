// https://codeforces.com/contest/2228/problem/A

// 11-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int count = 0;
        int count1 = 0;
        int count2 = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                count++;
            } else if (a[i] % 2 == 0) {
                count2++;
            } else {
                count1++;
            }
        }

        count += min(count1, count2);

        int rest = max(count1, count2) - min(count1, count2);
        count += rest / 3;

        cout << count << endl;
    }
}