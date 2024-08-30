#include <bits/stdc++.h>
using namespace std;

// #define int long long

int binMul(int a, int b, int c) {
    a = a%c;
    int res = 0;
    while(b) {
        if(b&1) res = (res+a)%c;
        a=(2*a)%c;
        b=b/2;
    }
    return res;
}

signed main() {
    int a,b,c; cin >> a >> b >> c;
    cout << binMul(a,b,c) << endl;
}
