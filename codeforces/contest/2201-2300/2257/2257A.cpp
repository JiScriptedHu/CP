// https://codeforces.com/contest/2257/problem/A

// 17-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> count(26, 0);

        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;

            int x = s[0] - 'a';
            count[x]++;
        }

        bool flag = true;
        for (int i = 0; i < m; i++) {
            string s;
            cin >> s;

            if (flag == false) continue;

            for (int j = 0; j < s.length(); j++) {
                int x = s[j] - 'A';

                if (count[x] == 0) {
                    flag = false;
                    break;
                }
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }
}