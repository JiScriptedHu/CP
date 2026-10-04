// https://www.codechef.com/problems/CAKEMAKE

// 04-10-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	
	cout << (max(a, b) - 1) * min(a, b) << '\n';
}
