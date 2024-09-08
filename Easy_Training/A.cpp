#include <bits/stdc++.h>
using namespace std;

void solve() {
	char a,b;cin >> a >> b;
	for (int i = 1; i<=8; i++) {
		if (i!= int(b)-48) cout << a << i << endl;
	}
	for (char c = 'a'; c <= 'h'; c++) {
		if (c != a) cout << c << b << endl;
	}
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

