// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/R 
#include <bits/stdc++.h>
using namespace std;

int a[100007];
bool palindrome(int l,int r) {
	if (l >= r) return true;
	if (a[l] != a[r]) return false;
	return palindrome(l+1,r-1);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	for (int i = 1; i<=n; i++) cin >> a[i];

	cout << (palindrome(1,n) ? "YES" : "NO") << endl;

	return 0;
}
