// https://www.codechef.com/problems/ASM120

// 18-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;

    while (t--) {
        long long X, Y;
        cin >> X >> Y;

        cout << gcd(X, Y) << endl;
    }

    return 0;
}
