// https://codeforces.com/contest/1921/problem/A

// 18-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<int> x(4);
        vector<int> y(4);

        for (int i = 0; i < 4; i++) cin >> x[i] >> y[i];

        sort(x.begin(), x.end());
        sort(y.begin(), y.end());


        int w = abs(x[0] - x[2]);
        int l = abs(y[0] - y[2]);


        cout << l * w << endl;
    }

    return 0;
}