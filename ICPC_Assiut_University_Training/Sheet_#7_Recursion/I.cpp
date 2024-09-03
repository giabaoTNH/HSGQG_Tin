// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/I
#include <bits/stdc++.h>
using namespace std;

set<char> vowels;
int count_vowels(string s) {
	if (s == "") return 0;
	int cnt = 0;
	if (vowels.find(s.back()) != vowels.end()) cnt++;
	s.pop_back();
	return count_vowels(s) + cnt;
}

int main() {
	// Init the set of vowels:
	// The vowels can be capital or small
	vowels = {'a','o','e','u','i','A','O','E','U','I'};

	// Solving problem
	string s;
	getline(cin,s);
	cout << count_vowels(s);

	return 0;
}
