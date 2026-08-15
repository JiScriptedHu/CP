// https://www.codechef.com/problems/DIWALIDISC

// 15-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int A, B;
    cin >> A >> B;

    if (A > B)
        cout << A - B;
    else
        cout << 0;

    return 0;
}
