// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/M 
#include <bits/stdc++.h>
using namespace std;

long long a[100007];
long long suf_sum(int n, int m) {
	if (m == 0) return 0;
	return a[n] + suf_sum(n-1,m-1);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m; cin >> n >> m;
	for (int i = 1; i<=n; i++) cin >> a[i];

	cout << suf_sum(n,m) << endl;

	return 0;
}
