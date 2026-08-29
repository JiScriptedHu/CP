// https://codeforces.com/contest/1931/problem/A

// 29-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<char> a(3, 'a');
        n -= 3;

        for (int i = 2; i >= 0; i--) {
            if (n > 25) {
                a[i] += 25;
                n -= 25;
            } else {
                a[i] += n;
                break;
            }
        }

        string s;
        for (int i = 0; i < 3; i++) cout << a[i];
        cout << endl;
    }

    return 0;
}