#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> a, b, res;

vector<vector<int>> cong(vector<vector<int>> &a, vector<vector<int>> &b) {
	int n,m;
	n = a.size();
	m = a[0].size();
	vector<vector<int>> c(n,vector<int>(m));
	for (int i = 0 ;i<n; i++) 
		for (int j = 0; j<m; j++) c[i][j] = a[i][j]+b[i][j];
	return c;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m,p,q;
	cin >> n >> m >> p >> q;
	
	a.resize(n,vector<int>(m));
	b.resize(p,vector<int>(q));
	for (int i = 0; i<n; i++)
		for (int j = 0; j<m; j++) cin >> a[i][j];

	for (int i = 0;i<p;i++)
		for (int j = 0; j<q; j++) cin >> b[i][j];

	res = cong(a,b);
	for (vector<int> x:res) {
		for (int nu:x) cout << nu << ' ';
		cout << endl;
	}
	
	return 0;
}

