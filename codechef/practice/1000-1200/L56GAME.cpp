// https://www.codechef.com/problems/L56GAME

// 04-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int even = 0, odd = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x % 2 == 0) even++;
            else odd++;
        }

        int ans = (odd % 2);
        if (even + odd / 2 > 0) ans++;

        cout << ans << endl;
    }

    return 0;
}
