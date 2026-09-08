// https://codeforces.com/contest/1919/problem/A

// 08-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        cout << ((a + b) % 2 == 0 ? "Bob" : "Alice") << endl;
    }

    return 0;
}