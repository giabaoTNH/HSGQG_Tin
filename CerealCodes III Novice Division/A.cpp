// Problem: https://codeforces.com/gym/105309/problem/A 
#include <bits/stdc++.h>
using namespace std;

int reverse(int n) {
	int a = 0;
	vector<int> hashmap = {0,1,2,0,0,5,9,0,8,6};
	while (n) {
		a*=10;
		a+=hashmap[n%10];
		n/=10;
	}
	return a;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin >> n;
	// Initialize start number (for n = 2, start number should be 10)
	// And for n = 3, start number should be 100
	int start_num = 1;
	for (int i = 1; i<n; i++) start_num *= 10;
	
	for (int i = start_num; i < start_num*10; i++) {
		int j = reverse(i);
		if (j == i && j % 3 == 0) {
			cout << j;
			return 0;
		}
	}
	cout << -1;

	return 0;
}
