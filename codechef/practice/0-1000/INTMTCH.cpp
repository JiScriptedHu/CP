// https://www.codechef.com/problems/INTMTCH

// 21-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	
	cout << (abs(x - y) <= 2 ? "Interesting" : "Boring") << endl;
}
