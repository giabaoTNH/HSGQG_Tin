#include <bits/stdc++.h>
using namespace std;

vector<int> a;

void print_digit(int n) {
	if (n == 0) {
		for (int i = a.size() - 1; i>0; i--) cout << a[i] << ' ';
		cout << a[0];
		return;
	}
	a.push_back(n%10);
	print_digit(n/10);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin >> t;
	while (t--) {
		a.clear();
		int n; cin >> n;
		if (n == 0) cout << 0;
		else print_digit(n);
		if (t > 0) cout << endl;
	}

	return 0;
}
