#include <bits/stdc++.h>

using namespace std;
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<string> s(n);
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	auto GetCount = [&](string a, string b) {
		int cnt = 0;
		for (int i = 0; i < (int) a.size(); i++) {
			// count the number of same characters that two given strings have
			if (a[i] == b[i]) {
				cnt++;
			} else {
				// break the loop once they are not same anymore since we only need
				// to the find the longest prefix in the all the strings
				break;
			}
		}
		return cnt;
	};
	int ans = INT_MAX;
	for (int i = 0; i < n - 1; i++) {
		// get the minimum number of same characters from the current and next string
		ans = min(ans, GetCount(s[i], s[i + 1]));
	}
	cout << ans << '\n';
	return 0;
}
