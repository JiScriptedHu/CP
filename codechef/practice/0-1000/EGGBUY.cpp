// https://www.codechef.com/problems/EGGBUY

// 02-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, y, f;
	cin >> x >> y >> f;
	
	cout << (x * 12 < (y * 12) + f ? x * 12 : (y * 12) + f);
}
