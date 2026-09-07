// https://www.codechef.com/problems/ELECTION1

// 07-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	
	cout << max(0, (n / 2) + 1 - k) << endl;
}
