#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e5 + 7;

int n,m;
int way[maxN];
int trace[maxN];
bool visited[maxN];
vector<int> adj[maxN];
vector<int> ans;

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
	memset(trace,-1,sizeof(trace));
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
			trace[x] = v;
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	inp();
	bfs(1);
	cout << way[n] << endl;;
	int j = n;
	while (j >= 0) {
		ans.push_back(j);
		j = trace[j];
	}
	while (ans.size()) {
		cout<<ans.back() << ' ';
		ans.pop_back();
	}
	cout << endl;
	return 0;
}
