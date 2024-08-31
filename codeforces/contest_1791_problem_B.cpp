#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        bool is_taken = false;
        int i = 0, j = 0;
        for (char c:s) {
            switch(c) {
                case 'U':
                    i++;
                    break;
                case 'D':
                    i--;
                    break;
                case 'L':
                    j--;
                    break;
                case 'R':
                    j++;
                    break;
            }
            if (i == 1 && j == 1) is_taken = true;
        }
        cout << (is_taken ? "YES" : "NO") << endl;
    }
}

