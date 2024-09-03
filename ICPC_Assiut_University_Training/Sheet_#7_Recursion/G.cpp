// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/G 
#include <bits/stdc++.h>
using namespace std;

void print(int n, int k) {
	if (n == 0) return;
	for (int i = 1; i<n; i++) cout << ' ';
	for (int i = 1 ;i<=k; i++) cout << '*';
	cout << endl;
	print(n-1,k+2);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;
	print(n,1);

	return 0;
}

