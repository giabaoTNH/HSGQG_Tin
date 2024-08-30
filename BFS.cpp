#include <bits/stdc++.h>
using namespace std;
//Khai bao

bool visited[100007];
vector<int> adj[100007];

void BFS(int u) {
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while (q.size()) {
        int s = q.front(); q.pop();
        cout << s << ", ";
        for (int v:adj[s]) if (!visited[v]) {
            visited[v] = true;
            q.push(v);
        }
    }
}

int main() {
    int n,m; cin >>n >> m;
    // Nhap do thi bang danh sach ke
    for (int i = 1; i<=m ;i++) {
        int u,v; cin >> u >> v;
        adj[u].push_back(v);
    }
    BFS(1);
}
