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


vt<vt<int>> adj;
vt<bool> vis;

void dfs(int u) {
	vis[u] = 1;
	EACH(i,adj[u]) {
		if(!vis[i])
			dfs(i);
	}	
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int city; cin >> city;
	while(city--) {
		int vertex, edge; cin >> vertex >> edge;
		adj.assign(vertex, vt<int>());
		while(edge--) {
			int a,b; cin >> a >> b;
			adj[a].pb(b);
			adj[b].pb(a);
		}
		int ans = 0;
		vis.assign(vertex, 0);
		FOR(i,vertex) {
			if(!vis[i]) {
				ans++;
				dfs(i);
			}
		}
		cout << ans-1 << endl;
	}
}