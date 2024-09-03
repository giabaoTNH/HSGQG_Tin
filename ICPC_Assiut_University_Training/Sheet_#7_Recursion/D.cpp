// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D
#include <bits/stdc++.h>
using namespace std;

string print_digit(int n) {
	if (n == 0) return "";

	string s = " ";
	s = (char)(n%10 + 48) + s;

	return print_digit(n/10) + s;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		if (n == 0) cout << "0" << endl;
		else cout << print_digit(n) << endl;
	}

	return 0;
}
