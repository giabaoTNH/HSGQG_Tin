// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/A 
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long n; cin >> n;
	long long d = 0;
	long long temp = n;
	while (temp > 1) {
		d++;
		temp/=2;
	}
	if ((1ll<<d) == n) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}
