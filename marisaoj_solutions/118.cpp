#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,m; cin >> n >> m;
    long long cnt = 0;

    while(n != m) {
        if (m < n) {
            cnt += n-m;
            m = n;
        } else if (n < m) {
            if (m&1) {
                m++;
                cnt++;
            }else {
                m/=2;
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}
