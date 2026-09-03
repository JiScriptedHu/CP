// https://www.codechef.com/problems/PRIME1

// 03-09-2026
#include <bits/stdc++.h>

using namespace std;

bool primeGen(int n) {
    if (n < 2) return false;

    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }

    return true;
}

int main() {
   int t;
    cin >> t;

    while (t--) {
        long long m, n;
        cin >> m >> n;

        for (long long i = m; i <= n; i++) {
            if (primeGen(i)) cout << i << endl;
        }

        cout << endl;
    }

    return 0;
}