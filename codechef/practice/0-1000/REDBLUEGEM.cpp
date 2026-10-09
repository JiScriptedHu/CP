// https://www.codechef.com/problems/REDBLUEGEM

// 09-10-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int r, b, p, q;
	cin >> r >> b >> p >> q;
	cout << max(r * p, b * q);
}
