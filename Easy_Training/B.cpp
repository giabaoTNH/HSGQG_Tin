#include <bits/stdc++.h>
using namespace std;

vector<int> a;
void solve() {
	int n; cin >> n;
	a.resize(n);
	for (int i = 0; i<n; i++) cin >> a[i];
	int res = 0;
	for (int i = 0; i<n; i++) {
		a[i] += 1;
		int prod=1;
		for (int j = 0; j<n; j++) prod*=a[j];
		res = max(res,prod);
		a[i]-=1;
	}
	cout << res << endl;
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

