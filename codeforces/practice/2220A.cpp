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

        sort(a, a + n, greater<int>());

        bool flag = false;
        for (int i = 0; i < n-1; i++) {
            if (a[i] == a[i+1]) {
                flag = true;
                break;
            }
        }

        if (flag) {
            cout << -1 << endl;
        } else {
            for (int i = 0; i < n; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
}