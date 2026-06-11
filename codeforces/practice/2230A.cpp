#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, a, b;
        cin >> n >> a >> b;

        if ((3 * a) < b) {
            cout << n * a << endl;
        } else {
            if ((n % 3) * a < b) {
                cout << (n / 3) * b + (n % 3) * a << endl;
            } else {
                cout << (n / 3) * b + b << endl;
            }
        }
    }
}