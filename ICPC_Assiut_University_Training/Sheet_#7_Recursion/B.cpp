#include <bits/stdc++.h>
using namespace std;
int n;

void print(int s) {
	if (s > n) return;
	cout << s << endl;
	print(s+1);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> n;
	print(1);

	return 0;
}

