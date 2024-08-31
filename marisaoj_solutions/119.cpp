#include <bits/stdc++.h>
using namespace std;
char mat[1007][1007];
#define ii pair<int,int>
#define mp make_pair

vector<ii > adj[1007][1007];
bool visited[1007][1007];
int way[1007][1007];

void bfs(ii u) {
	queue<ii > q;
	int x = u.first; int y = u.second;
	visited[x][y] = true;
	q.push(u);
	while (q.size()) {
		ii v = q.front();
		q.pop();
		int i = v.first, j = v.second;
		for (ii d : adj[i][j]) {
			int r = d.first, t = d.second;
			if (!visited[r][t]) {
				q.push(d);
				visited[r][t] = true;
				way[r][t] = way[i][j]+1;
			}
		}
	}
}

int main() {
	int n,m;
	cin >> n >> m;
	for (int i = 1; i<=n; i++) {
		for (int j = 1; j<=m; j++) {
			cin >> mat[i][j];
		}
	}
	for (int i = 1; i<=n; i++) {
		for (int j = 1; j<=m; j++) {
			if (mat[i][j] == '1') continue;
			int x,y;
			vector<ii > v = {mp(i+1,j),mp(i,j+1),mp(i-1,j),mp(i,j-1)};
			for (ii p:v) {
				x = p.first; y = p.second;
				if (x > 0 && y > 0 && mat[x][y] != '1') {
					adj[i][j].push_back(p);
					//adj[x][y].push_back(mp(i,j));
				}
			}
		}
	}
	bfs(mp(1,1));
	if (n == 1 && m == 1) {
		if (mat[n][m] == '1') cout << -1 << endl;
		else cout << '0' << endl;
	}
	else {
		if (way[n][m] == 0) cout << -1 << endl;
		else cout << way[n][m] << endl;
	}
	return 0;
}
