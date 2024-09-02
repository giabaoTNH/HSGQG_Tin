// Problem: https://codeforces.com/gym/105309/problem/D 
// We are trying to put 1s into the grid of 0s 
// The way we try to put is replace the 0s in the line with 1s
// when the line is full, we start a new line
// 
// for 4 3, the solution is
// 1 1 1 0
// 0 0 0 0
// 0 0 0 0
// 0 0 0 0
// for 4 7, the solution is
// 1 1 1 1
// 1 1 1 0
// 0 0 0 0
// 0 0 0 0
// for 4 13 the solution is
// 1 1 1 1
// 1 1 1 1
// 1 1 1 1
// 1 0 0 0
// By this solution, the maximum rank is 4, 
// you can try to prove it yourself, by filling 1s into the grid 
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,k; cin >> n >> k;

	for (int i = 1; i<=n; i++) {
		for (int j = 1; j<=n; j++) {
			if (k > 0) cout << 1;
			else cout << 0;
			k--;
		}
		cout << endl;
	}

	return 0;
}
