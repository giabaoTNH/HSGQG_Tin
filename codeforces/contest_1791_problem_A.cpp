#include <bits/stdc++.h>
using namespace std;

int main() {
    set<char> s({'c','o','d','e','f','o','r','c','e','s'});
    int t; cin >> t;
    while (t--) {
        char c; 
        cin >> c;
        bool check = (s.find(c)) != s.end();
        cout << (check ? "YES" : "NO") << endl;
    }
}
  
