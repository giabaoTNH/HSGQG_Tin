#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	if (n%3 == 0) cout << "Second" << endl;
	else cout << "First" << endl;
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

