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

        sort(a, a + n);

        if (n == 2) cout << a[1] << " " << a[0] << endl;
        else {
            bool flag = true;

            for (int i = 0; i < n-2; i++) {
                if (a[i+2] % a[i+1] != a[i]) {
                    flag = false;
                    break;
                }
            }

            if (flag) {
                cout << a[n-1] << " " << a[n-2] << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }
}