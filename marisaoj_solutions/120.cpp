#include <bits/stdc++.h>
using namespace std;
vector<int> adj[100007];
bool visited[100007];

bool haiphia;
int mau[10000007];
void BFS(int u) {
    queue<int> q;
    q.push(u);
    visited[u] = true;
    mau[u] = 0;
    while(q.size()) {
        int s = q.front(); q.pop();
        for (int v:adj[s]) {
            if (mau[v] == mau[s]) haiphia=false;
            if (!visited[v]) {
                visited[v] = true;
                q.push(v);
                mau[v] = !mau[s];
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m; cin >> n >> m;
    for (int i = 0 ;i <m ;i++) {
        int u,v;cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    haiphia=true;
    memset(mau,-1,sizeof(mau));
    for (int i = 1; i<=n ;i++) {
        if (!visited[i]) BFS(i);
    }
    cout << (haiphia ? "YES" : "NO") << '\n';
    return 0;
}
        

