// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/H 
#include <bits/stdc++.h>
using namespace std;

void print(int n, int k) {
	if (n == 0) return;
	for (int i = 1; i<=k; i++) cout << ' ';
	for (int i = 1; i<n*2; i++) cout << '*';
	cout << endl;
	print(n-1, k+1);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;	
	print(n,0);

	return 0;
}
