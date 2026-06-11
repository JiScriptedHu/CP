#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;

        cin >> n;
        cin >> s;

        if (n % 2 == 1) {
            cout << "NO" << endl;
        } else {
            int count = 0;

            for (int i = 0; i < n; i++) {
                if (s[i] == '(') {
                    count++;
                } else {
                    count--;
                }
            }

            if (count == 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
}