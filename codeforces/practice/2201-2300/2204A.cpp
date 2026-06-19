// https://codeforces.com/contest/2204/problem/A

// 14-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int player = 1;
        int ball = 1;

        for (char ch : s) {
            if (ch == 'R' && player == ball) {
                player++;
                ball++;
            } else {
                ball--;
            }
        }

        cout << player << endl;
    }
}