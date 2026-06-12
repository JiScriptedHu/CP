#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        bool flag = false;
        int x;

        while (n--) {
            cin >> x;
            if (x == 100) flag = true;
        }

        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}