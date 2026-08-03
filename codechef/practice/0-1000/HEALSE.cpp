// https://www.codechef.com/problems/HEALSE

// 03-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int H;
	cin >> H;
	
	if (H == 8) {
	    cout << "PERFECT" << endl;
	} else {
	    cout << (H < 8 ? "LESS" : "MORE") << endl;
	}
}
