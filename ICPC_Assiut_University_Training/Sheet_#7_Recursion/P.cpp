// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/P 
#include <bits/stdc++.h>
using namespace std;

long long floor_log_base_2(long long n) {
	if (n == 1) return 0;
	return floor_log_base_2(n/2) + 1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long n; cin >> n;
	cout << floor_log_base_2(n) << endl;

	return 0;
}
