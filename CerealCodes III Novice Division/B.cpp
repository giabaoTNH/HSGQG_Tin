// Problem: https://codeforces.com/gym/105309/problem/B 
#include <bits/stdc++.h>
using namespace std;

bool sol(int n1,int n2) {
	int part1,part2;
	part1 = (n2)/2;
	part2 = n2 - part1;

	n1 -= (abs(part1-part2))*2;
	if (n1 < 0 || n1 & 1) return false;
	return true;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin >> n;
	// n1 to count the number of 1's,
	// n2 to count the number of 2's

	int n1 = 0,n2= 0;
	for (int i = 0; i<n; i++) {
		int temp; cin >> temp;
		if (temp == 1) n1++;
		else if (temp == 2) n2++;
	}

	// sol(n1,n2) to determine if there is a solution
	// to n1 number 1, and n2 number 2
	cout << (sol(n1,n2) ? "YES" : "NO") << endl;
	return 0;
}
