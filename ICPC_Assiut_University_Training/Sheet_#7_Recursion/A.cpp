// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A
#include <bits/stdc++.h>
using namespace std;

void print(int n) {
	if (n == 0) return;
	cout << "I love Recursion" << endl;
	print(n-1);
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n; cin >> n;
	print(n);

	return 0;
}

