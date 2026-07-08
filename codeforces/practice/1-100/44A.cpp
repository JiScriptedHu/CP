// https://codeforces.com/contest/44/problem/A

// 08-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<string, string>> a(n);

    for (int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;

    int count = 0;

    for (int i = 0; i < n; i++) {
        bool flag = true;
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                flag = false;
            }
        }

        if (flag) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}