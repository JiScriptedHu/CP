// https://www.codechef.com/problems/TRICHECK

// 29-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	
	cout << (a + b > c && b + c > a && a + c > b ? "YES" : "NO") << endl;
}
