#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;
vector<vector<int>> a,c;

int binMul(int a, int b, int c) {
	a = a%c;
	int res = 0;
	while(b) {
		if (b&1) res = (res+a) %c;
		a = (a*2)%c;
		b=b/2;
	}
	return res;
}

vector<vector<int>> nhan(vector<vector<int>> &a, vector<vector<int>> &b) {
	int n,m,q;
	n = a.size();
	m = a[0].size();
	q = b.size();
	vector<vector<int>> c(n,vector<int>(q));
	for (int i = 0; i<n; i++) 
		for (int j = 0; j<q; j++) 
			for (int k = 0; k<m; k++) c[i][j]+= binMul(a[i][k],b[k][j],MOD);
	return c;
}

vector<vector<int>> mat_po(vector<vector<int>> &a, int b) {
	if (b == 1) return a;
	if (b&1) {
		vector<vector<int>> c = mat_po(a,b-1);
		return nhan(a,c);
	}
	vector<vector<int>> c = mat_po(a,b/2);
	return nhan(c,c);
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n,k; cin >> n >> k;
	a.resize(n,vector<int>(n));

	for (int i = 0; i<n; i++) 
		for (int j = 0; j<n; j++) cin >> a[i][j];

	c = mat_po(a,k);
	for (vector<int> x:c) {
		for (int t:x) cout << t << ' ';
		cout << endl;
	}

	return 0;
}

