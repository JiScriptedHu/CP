#include <bits/stdc++.h>
#include <cmath>
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

        int level = a[0];
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            sum += a[i];
            int h = sum / (i+1);
            level = min(level, h);

            a[i] = level;
        }

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
    }
}