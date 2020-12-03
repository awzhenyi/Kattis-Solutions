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
vt<int> ans;
vt<int> ontop;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int vertex, edge;
	cin >> vertex >> edge;
	adj.assign(vertex, vt<int>());
	ontop.assign(vertex,0);
	while(edge--) {
		int u,v;
		cin >> u >> v;
		--u, --v;
		adj[u].pb(v);
		ontop[v]++;
	}
	queue<int> qu;
	FOR(i,vertex) {
		if(ontop[i]==0)
			qu.push(i);
	}
	while(qu.size()) {
		int u = qu.front();
		qu.pop();
		ans.pb(u);
		EACH(i,adj[u]) {
			ontop[i]--;
			if(ontop[i]==0) {
				qu.push(i);
			}
		}
	}
	if(ans.size()!=vertex) {
		cout << "IMPOSSIBLE" << endl;
	} else {
		EACH(i,ans) {
			cout << i+1 << endl;
		}
	}
	return 0;
}