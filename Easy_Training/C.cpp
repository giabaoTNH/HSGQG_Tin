#include <bits/stdc++.h>
using namespace std;

string s;
void solve() {
	s = "";
	for (int i = 1; i<=8; i++) {
		for (int j = 1; j<=8; j++) {
			char c; cin >> c;
			if (c>='a' && c <= 'z') s.push_back(c);
		}
	}
	cout << s << endl;
	return;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}

