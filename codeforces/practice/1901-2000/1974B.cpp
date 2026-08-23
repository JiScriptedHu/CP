// https://codeforces.com/contest/1974/problem/B

// 23-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        vector<int> a(26, 0);
        vector<char> en;
        for (int i = 0; i < s.size(); i++) {
            int x = s[i] - 'a';

            if (a[x] == 0) {
                a[x]++;
                en.push_back(s[i]);
            }
        }

        sort(en.begin(), en.end());

        for (int i = 0; i < s.size(); i++) {
            for (int j = 0; j < en.size(); j++) {
                if (s[i] == en[j]) {
                    s[i] = en[en.size() - 1 - j];
                    break;
                }
            }
        }

        cout << s << endl;
    }

    return 0;
}