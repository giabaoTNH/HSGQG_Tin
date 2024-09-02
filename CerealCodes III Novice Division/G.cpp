// Problem: https://codeforces.com/gym/105309/problem/G 
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		long long prefix_sum[100007];
		prefix_sum[0] = 0;
		for (int i = 1; i<=n; i++) {
			long long temp; cin >> temp;
			prefix_sum[i] = prefix_sum[i-1]+temp;
		}

	}

	return 0;
}
