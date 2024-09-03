// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/K 
#include <bits/stdc++.h>
using namespace std;

int a[1007];

int max_num(int n) {
	if (n < 0) return INT_MIN;
	return max(a[n],max_num(n-1));
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;
	for (int i = 0; i<n; i++) cin >> a[i];
	cout << max_num(n-1) << endl;

	return 0;
}
