// https://codeforces.com/contest/2233/problem/A

// 13-06-2026
#include <bits/stdc++.h>
using namespace std;

long long ceilDiv(long long a, long long b) {
    return (a + b - 1) / b;
}

int main() {

    int T;
    cin >> T;

    while (T--) {
        long long n, x, y, z;
        cin >> n >> x >> y >> z;

        long long noAI = ceilDiv(n, x + y);

        long long AI;

        long long finishByMaxim = ceilDiv(n, x);

        if (finishByMaxim <= z) {
            AI = finishByMaxim;
        } else {
            AI = z + ceilDiv(n - x * z, x + 10 * y);
        }

        cout << min(noAI, AI) << endl;
    }
}