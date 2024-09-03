// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/J 
#include <bits/stdc++.h>
using namespace std;

long long factorial(int n) {
	if (n == 0) return 1;
	return factorial(n-1)*n;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin >> n;
	cout << factorial(n) << '\n';

	return 0;
}
