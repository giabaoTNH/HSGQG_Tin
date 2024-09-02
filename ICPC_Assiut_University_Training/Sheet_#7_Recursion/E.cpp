#include <bits/stdc++.h>
using namespace std;

string s;
void convert(int n) {
	if (n == 0) return;
	s = (char)(n%2 + 48) + s;
	convert(n/2);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		s = "";
		convert(n);
		cout << s << endl;
	}

	return 0;
}
