#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int count = 0;
        for (int i = n-1; i >= 0; i--) {
            if (i+1 != n && a[i+1] > 0) a[i] += a[i+1];
            
            if (a[i] > 0) count++;
        }

        cout << count << endl;
    }
}