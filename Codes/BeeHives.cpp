#include <iostream>
#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define is pair<int,string>
#define ii pair<int,int>
#define mp make_pair
#define FOR(i,n) for(int i=0; i<n; ++i)
#define pb push_back
#define eb emplace_back
#define ar array
#define vt vector
#define EACH(i,x) for(auto &i : x)


const int INF = 1e9+7;
int vertex,edge;
vt<vt<int>> adj;

int bfs(int v) {
	queue<int> qu;
	qu.push(v);
	int father[vertex];
	int dist[vertex];
	fill(dist, dist+vertex, -1);// fill array with all -1s
	father[v] = -1;
	dist[v] = 0;
	int ans = INF;
	while(qu.size()) {
		int p = qu.front();
		qu.pop();
		EACH(i,adj[p]) { //i is vertex of neighbours of vertex v;
			if(i == father[p]) continue;
			if(dist[i]==-1) {
				dist[i]=dist[p]+1;
				father[i] = p;
				qu.push(i);
			} else {
				ans = min(ans, dist[i]+dist[p]+1);
			}

		}
	}
	return ans;
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> vertex >> edge;
	adj.assign(vertex, vt<int>());
	FOR(i,edge) {
		int u,v; cin >> u >> v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	int ans = INF;
	FOR(i,vertex) {
		ans = min(ans, bfs(i));
	}

	if(ans == INF) {
		cout << "impossible" << endl;
	} else {
		cout << ans << endl;
	}
}