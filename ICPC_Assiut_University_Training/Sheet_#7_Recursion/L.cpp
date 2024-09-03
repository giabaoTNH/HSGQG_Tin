// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/L 
#include <bits/stdc++.h>
using namespace std;

long long a[1007];
long long sum(int n) {
	if (n==0) return 0;
	return a[n]+sum(n-1);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;
	for (int i = 1; i<=n; i++) cin >> a[i];

	// Print the sum of the first n elements
	cout << sum(n) << endl;

	return 0;
}
