#include <bits/std++.h>
using namespace std;
vector<int> adj[100007];
bool visited[100007];

void DFS(int u) {
    visited[u] = true;
    cout << u << ", ";
    for (int v:adj[u]) if (!visited[v]) DFS(v);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m; cin >> n >> m;
    for (int i = 0; i<m; i++) {
        int u,v; cin >> u >> v;
        adj[u].push_back(v);
    }
    DFS(1);
    return 0;
}
