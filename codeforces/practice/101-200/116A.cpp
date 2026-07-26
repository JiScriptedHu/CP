// https://codeforces.com/contest/119/problem/A

// 23-07-2026
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int current = 0, capacity = 0;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        current -= a;
        current += b;
        capacity = max(capacity, current);
    }

    cout << capacity << endl;

    return 0;
}