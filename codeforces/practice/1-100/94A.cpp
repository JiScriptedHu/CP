// https://codeforces.com/contest/94/problem/A

// 11-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<string> d(10);
    for (int i = 0; i < 10; i++) cin >> d[i];

    int pos = 0;
    vector<string> c(8);
    for (int i = 0; i < 8; i++) {
        int x = 0;
        while (x < 10) {
            c[i].push_back(s[pos]);
            x++;
            pos++;
        }
    }
    
    string ans = "";
    for (int i = 0; i < 8; i++) {
        int x = 0;
        while (true) {
            if (c[i] == d[x]) {
                ans.push_back(char(x + '0'));
                break;
            }
            x++;
        }
    }

    cout << ans << endl;
}