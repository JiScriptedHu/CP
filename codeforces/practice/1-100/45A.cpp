// https://codeforces.com/contest/45/problem/A

// 08-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> months(12);
    months = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    string current;
    int gap;
    cin >> current >> gap;

    for (int i = 0; i < 12; i++) {
        if (current == months[i]) {
            int x = (i + gap) % 12;
            cout << months[x] << endl;
            break;
        }
    }
    
    return 0;
}