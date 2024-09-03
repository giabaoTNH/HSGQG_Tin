// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C 
#include <bits/stdc++.h>
using namespace std;

void print(int n) {
	// This step to make sure there is no
	// trailing spaces
	// If the problem didn't tell about trailing spaces
	// you could do the following code:
	// if (n == 0) return;
	if (n == 1) {
		cout << 1;
		return;
	}
	cout << n << ' ';
	print(n-1);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin >> n;
	print(n);
	
	return 0;
}
