#include <bits/stdc++.h>
using namespace std;
#define ii pair<int,int>
#define mp make_pair
#define fi first
#define se second
char a[1003][1003];
vector<ii> adj[1007][1007];
int d;
vector<int> ans;
bool visited[1007][1007];

void dfs(int i,int j) {
    if (a[i][j] == 'x') d++;
    visited[i][j] = true;
    for (ii p:adj[i][j]) {
        if (visited[p.first][p.second] == false) dfs(p.first,p.second);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m; cin >> n >> m;
    for (int i = 1; i<=n; i++) {
        for (int j = 1; j<=m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i<=n; i++) {
        for (int j = 1; j<=m; j++) {
            if (a[i][j] == '#') continue;
            if (a[i-1][j] != 0 && a[i-1][j] != '#') 
                adj[i][j].push_back(mp(i-1,j));
            if(a[i][j+1] != 0 && a[i][j+1] != '#')
                adj[i][j].push_back(mp(i,j+1));
            if (a[i+1][j] != 0 && a[i+1][j] != '#')
                adj[i][j].push_back(mp(i+1,j));
            if (a[i][j-1] != 0 && a[i][j-1] != '#')
                adj[i][j].push_back(mp(i,j-1));
        }
    }
    for (int i = 1; i<=n; i++) {
        for (int j = 1; j<=m; j++) {
            if (!visited[i][j]) {
                d= 0;
                dfs(i,j);
                ans.push_back(d);
            }
        }
    }
    sort(ans.begin(),ans.end());
    for (int x:ans) if (x > 0) cout << x << ' ';
    cout << endl;

    return 0;
}
