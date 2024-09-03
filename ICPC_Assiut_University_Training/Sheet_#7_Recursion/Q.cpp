// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Q 
#include <bits/stdc++.h>
using namespace std;

long long collatz(long long n) {
	if (n == 1) return 1;
	if (n & 1) return collatz(n*3 +1) + 1;
	if (n % 2 == 0) return collatz(n/2) + 1;
	return 0;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long n; cin >> n;
	cout << collatz(n) << endl;
	return 0;
}
