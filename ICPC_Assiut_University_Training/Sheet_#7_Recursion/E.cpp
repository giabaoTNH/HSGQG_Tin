// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/E
#include <bits/stdc++.h>
using namespace std;

string convert(int n) {
	if (n == 0) return "";
	char s = (char)(n%2 + 48);
	return convert(n/2) + s;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		cout << convert(n) << '\n';
	}

	return 0;
}
