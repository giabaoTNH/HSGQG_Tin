#include <bits/stdc++.h>
using namespace std;
const int maxN = 1e5 + 7;
bool visited[maxN];
vector <int> adj[maxN];
int n,m;
void inp() {
	 cin >> n >> m;
	 for (int i = 1; i<=m; i++) {
	 	int u,v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	memset(visited,false,sizeof(visited));
}
void dfs(int u) {
	visited[u] = true;
	for (int v : adj[u]) if (visited[v] != true) {
		dfs(v);
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	inp();
	int cnt = 0;
	for (int i = 1; i<=n; i++) 
		if (visited[i] != true) {
			++cnt;
			dfs(i);
		}
	cout << cnt << endl;
	return 0;
}
