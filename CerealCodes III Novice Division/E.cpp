// Problem: https://codeforces.com/gym/105309/problem/E 
// If there is any pair which has the odd numbers of
// elements in between, then we should break that pair
// which should increase the answer by 1
#include <bits/stdc++.h>
using namespace std;

vector<int> st1[100007],st2[100007];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin >> t;
	while (t--) {
		int ans = 0;
		int n,k; cin >> n >> k;
		for (int i = 1; i<=k; i++) {
			int a,b; cin >> a >> b;
			if ((abs(a-b)-1)%2 == 1) ans++;
		}
		cout << ans << endl;
	}

	return 0;
}
