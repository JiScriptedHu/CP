// https://codeforces.com/contest/78/problem/A

// 22-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 3;

    vector<string> s(n);
    vector<int> a(n);
    a = {0, 0, 0};
    for (int i = 0; i < n; i++) getline(cin, s[i]);
    
    for (int i = 0; i < n; i++) {
        int k = s[i].length();

        for (int j = 0; j < k; j++) {
            if (s[i][j] == 'a' || s[i][j] == 'e' || s[i][j] == 'i' || s[i][j] == 'o' || s[i][j] == 'u') {
                a[i]++;
            }
        }
    }

    if (a[0] == 5 && a[1] == 7 && a[2] == 5) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}