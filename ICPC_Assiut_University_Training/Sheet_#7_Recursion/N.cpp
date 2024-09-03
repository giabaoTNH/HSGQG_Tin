// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/N 
#include <bits/stdc++.h>
using namespace std;

int r,c;
int a[1007][1007],b[1007][1007];
void mat_sum(int i, int j) {
	if (i == r && j == c) {
		cout << a[i][j]+b[i][j] << endl;
		return;
	}
	if (j == c) {
		cout << a[i][j]+b[i][j] << endl;
		mat_sum(i+1,1);
		return;
	}
	cout << a[i][j] + b[i][j] << ' ';
	mat_sum(i,j+1);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> r >> c;
	for (int i = 1; i<= r; i++)
		for (int j = 1; j<=c; j++) cin >> a[i][j];
	for (int i = 1; i<=r; i++) 
		for (int j = 1; j<=c; j++) cin >> b[i][j];

	mat_sum(1,1);

	return 0;
}
