#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int i = 0; int j = n-1;
        while(i<j && s[i] != s[j]) {
            i++;j--;
        }
        cout << j-i+1 << endl;
    }

    return 0;
}

