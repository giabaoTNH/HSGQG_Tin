#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e5 + 7;

int n,m;
int way[maxN];
bool visited[maxN];
vector<int> adj[maxN];

void inp() {
	cin >> n >> m;
	for (int i = 1; i<=m; i++) {
		int u,v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	memset(way,0,sizeof(way));
	memset(visited,false,sizeof(visited));
}

void bfs(int u) {
	queue<int> q;
	visited[u] = true;
	q.push(u);
	while (q.size()) {
		int v = q.front();
		q.pop();
		for (int x:adj[v]) if (!visited[x]) {
			q.push(x);
			visited[x] = true;
			way[x] = way[v]+1;
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	inp();
	bfs(1);
	for (int i = 2; i<=n; i++) {
		if (way[i]) cout << way[i] << ' ';
		else cout << -1 << ' ';
	}
	return 0;
}
