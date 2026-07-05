// https://codeforces.com/contest/6/problem/A

// 05-07-2026
#include <bits/stdc++.h>
using namespace std;

bool checkTriangle(int a, int b, int c) {
    return (a + b > c) && (b + c > a) && (c + a > b);
}

bool checkSegment(int a, int b, int c) {
    return (a + b == c) || (b + c == a) || (c + a == b);
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    bool tri = false;
    tri = checkTriangle(a, b, c) || tri;
    tri = checkTriangle(a, b, d) || tri;
    tri = checkTriangle(a, c, d) || tri;
    tri = checkTriangle(b, c, d) || tri;

    if (tri) {
        cout << "TRIANGLE" << endl;
        return 0;
    }

    bool seg = false;
    seg = checkSegment(a, b, c) || seg;
    seg = checkSegment(a, b, d) || seg;
    seg = checkSegment(a, c, d) || seg;
    seg = checkSegment(b, c, d) || seg;

    if (seg) {
        cout << "SEGMENT" << endl;
    } else {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}