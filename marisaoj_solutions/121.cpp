#include <bits/stdc++.h>
using namespace std;
const int maxN = 1e5+7;

// int way[maxN];
// int waya[maxN];
// int wayb[maxN];
vector<int> way(maxN,0),waya,wayb;
vector<int> adj[maxN];
bool visited[maxN];
void BFS(int u) {
    queue<int> q;
    q.push(u);
    visited[u] = true;
    way[u] = 0;
    while(q.size()) {
        int s = q.front();q.pop();
        for (int v: adj[s]) if(!visited[v]) {
            visited[v] = true;
            way[v] = way[s]+1;
            q.push(v);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n,m; cin >> n >> m;
    int a,b; cin >> a >>b;
    int cnt = 0;
    for (int i = 0; i<m; i++) {
        int u,v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    BFS(a);
    waya = way;
    memset(visited,false,sizeof(visited));
    BFS(b);
    wayb = way;
    for (int i = 1; i<=n; i++) {
        if (waya[i] <= wayb[i]) cnt++;
    }
    cout << cnt << endl; 
            
    return 0;
}
