#include <bits/stdc++.h>
using namespace std;

int a[10007];

void print(int n) {
	if (n < 0) return;

	if (n % 2 == 0) cout << a[n] << ' ';
	print(n-1);
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n; cin >> n; 
	for (int i = 0; i<n; i++) cin >> a[i];

	print(n-1);

	return 0;
}
