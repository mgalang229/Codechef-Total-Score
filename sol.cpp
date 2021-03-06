#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k;
		cin >> n >> k;
		vector<int> a(k);
		for (int i = 0; i < k; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n; i++) {
			// input the string (problems solved by the competitors)
			string s;
			cin >> s;
			long long total_score = 0;
			for (int j = 0; j < k; j++) {
				if (s[j] == '1') {
					// if 's[j]' is equal to 1, then add the points of the
					// corresponding problem to the total score of the current competitor
					total_score += a[j];
				}
			}
			cout << total_score << '\n';
		}
	}
	return 0;
}
