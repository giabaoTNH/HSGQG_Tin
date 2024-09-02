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
		long long st1 = prefix_sum[(1+n)/2];
		long long st2 = prefix_sum[n/2];
		long long st3 = prefix_sum[n] - st1;
		long long st4 = prefix_sum[n] - st2;
		long long ans = st1;
		ans = max(ans,st2);
		ans = max(ans,st3);
		ans = max(ans,st4);
		cout << ans << endl;
	}

	return 0;
}
