#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x,y;
    cin >> x >> y;

    int ans = 0;
    while (y--) {
        if (x > 8) {
            ans++;
            x = 2;
        } else if (x <= 6) {
            ans++;
        }
        x++;
    }
    cout << ans << '\n';
}
