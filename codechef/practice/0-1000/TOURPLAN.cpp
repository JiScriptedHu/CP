// https://www.codechef.com/problems/TOURPLAN

// 26-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, y, z;
	cin >> x >> y >> z;
	
	cout << x + ((z - 50 > 0 ? z - 50 : 0) * y) << endl;
}
