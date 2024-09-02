// Problem: https://codeforces.com/gym/105309/problem/C 
// We will create 2 grids which satisfied the problem,
// then we will count the differences between input and 
// the 2 grids that we have created.
// After counting, we will compare the differences between 
// grid1 and grid2, then we will take the min
#include <bits/stdc++.h>
using namespace std;
bool grid1[1007][1007],grid2[1007][1007];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// Init grid1, grid2
	grid1[0][0] = 0;
	grid2[0][0] = 1;
	for (int i = 1; i<=1001; i++) {
		grid1[i][0] = !grid1[i-1][0];
		grid1[0][i] = !grid1[0][i-1];
		grid2[i][0] = !grid2[i-1][0];
		grid2[0][i] = !grid2[0][i-1];
	}
	for (int i = 1; i <= 1001; i++) {
		for (int j = 1; j<=1001; j++) {
			grid1[i][j] = grid1[i-1][j-1];
			grid2[i][j] = grid2[i-1][j-1];
		}
	}
	// Now let's solve the problem=)
	int t; cin >> t;
	while (t--) {
		int n,m; cin >> n >> m;
		int diff1 = 0, diff2 = 0;
		for (int i = 0; i<n; i++) {
			for (int j = 0 ; j<m;j++) {
				char temp; cin >> temp;
				if (temp-48 != grid1[i][j]) diff1++;
				if (temp-48 != grid2[i][j]) diff2++;
			}
		}
		cout << min(diff1,diff2) << endl;
	}
	return 0;
}
// The way i did this problem is when i thought about backtracking, 
// i thought i would create a grid that satisfied the condition
// then i thought about that i should create the grids first
