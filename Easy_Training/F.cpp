#include <bits/stdc++.h>
using namespace std;

void solve() {
	vector<int> mp = {10,1,2,3,4,5,6,7,8,9};
	string s; cin >> s;
	cout << abs(mp[1]-mp[s[0]-48]) + 1
			+ abs(mp[s[0]-48] - mp[s[1]-48]) + 1
			+ abs(mp[s[1]-48] - mp[s[2]-48]) + 1
			+ abs(mp[s[2]-48] - mp[s[3]-48]) + 1
	<< endl;
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

