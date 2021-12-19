#include <bits/stdc++.h>

using namespace std;

int UseSubway(int n, int x) {
	// find the n-th station (n-th triangular number)
	// add the stations in the final answer
	// note: don't forget to add the walking distance if x is not directly at a station
	int subway = (n * (n + 1)) / 2;
	return abs(subway - x) + n;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int x;
		cin >> x;
		int ans = x;
		// there are 44,720 triangular numbers under (10 ^ 9)
		// therefore, we can brute-force every station
		for (int i = 0; i <= 44722; i++) {
			ans = min(ans, UseSubway(i, x));
		}
		cout << ans << '\n';
	}
	return 0;
}
