// https://www.codechef.com/problems/HWFIN

// 20-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	
	int total = x + (y * 10);
	
	cout << (total >= 100 ? "YES" : "NO") << endl;
	
	return 0;
}
