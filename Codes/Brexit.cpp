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
#define vt vector
#define EACH(i, x) for(auto &i : x)


const int mxN = 2e5;
vt<vt<int>> adj;
vt<int> deg;
bool leave[mxN];

void dfs(int l) {
	leave[l] = 1;
	EACH(i,adj[l]) {
		if(!leave[i]) {
			deg[i]--;
			if(2*deg[i] <= adj[i].size()) {
				dfs(i);
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int c,p,x,l; cin >> c >> p >> x >> l;
	--x, --l;
	adj.assign(c,vt<int>());
	deg.assign(c,0);
	while(p--) {
		int a,b; cin >> a >> b;
		--a, --b;
		adj[a].pb(b); //push edge
		adj[b].pb(a);
		deg[a]++; // count degree
		deg[b]++; // count degree
	}
	dfs(l);
	cout << (leave[x]==1?"leave":"stay") << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int c,p,x,l; cin >> c >> p >> x >> l;
	--x, --l;
	adj.assign(c,vt<int>());
	deg.assign(c,0);
	while(p--) {
		int a,b; cin >> a >> b;
		--a, --b;
		adj[a].pb(b);
		adj[b].pb(a);
		deg[a]++;
		deg[b]++;
	}
	queue<int> qu;
	leave[l] = 1;
	EACH(i,adj[l]) {
		qu.push(i);
	}
	while(qu.size()) {
		int cc = qu.front();
		qu.pop();
		if(leave[cc]==1) continue;
		deg[cc]--;
		if(2*deg[cc] <= adj[cc].size()) {
			leave[cc] = 1;
			EACH(i,adj[cc])
				qu.push(i);
		}
	}
	cout << (leave[x]==1?"leave":"stay") << endl;
	
}