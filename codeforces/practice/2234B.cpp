#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long a = n % 12;
        long long b = n - a;

        if (a == 10) {
            a += 12;
            b -= 12;
        }

        if (a < 0 || b < 0) {
            cout << -1 << endl;
        } else {
            cout << a << " " << b << endl;
        }
    }
}