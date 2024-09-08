#include <bits/stdc++.h>
using namespace std;

bool visited[256];
vector<string> a;
void solve() {
	//Initialization
	string s = "vika";
	memset(visited,false,sizeof(visited));

	int n,m; cin >> n >> m;
	a.resize(n);
	int tar = 0;
	for (int i = 0; i<n; i++) cin >> a[i];
	for (int j = 0; j<m; j++) {
		for (int i = 0; i<n; i++) {
			if (a[i][j] == s[tar]) visited[s[tar]] = true;
		}
		if (visited[s[tar]]) tar++;
	}

	//Checking
	bool check = true;
	for (char c:s) if (!visited[c]) check = false;
	cout << (check ? "yes" : "no") << endl;
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

