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


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n; cin >> n;
	vt<vt<ii>> adj;
	adj.assign(n, vt<ii>());
	vt<int> remain(n);
	vt<int> goods(n);
	vt<bool> die;
	die.assign(n,0);
	for(int i=0; i<n; ++i) {
		int a,b; cin >> a >> b;
		goods[i] = a;
		while(b--) {
			int u,v; cin >> u >> v;
			--u;
			adj[u].pb({i,v});
			remain[i]+=v;
		}
	}
	queue<int> qu;
	die[0] = 1;
	EACH(i, adj[0]) {
		qu.push(i.first);
		remain[i.first]-=i.second;
	}
	while(qu.size()) {
		int cc = qu.front();
		qu.pop();		
		if(die[cc]==1)continue;
		if(remain[cc] < goods[cc]) {
			die[cc] = 1;
			EACH(i,adj[cc]) {
				qu.push(i.first);
				remain[i.first]-=i.second;
			}
		}
	}
	int ans = 0;
	FOR(i,n) {
		ans += die[i];
	}
	cout << n-ans << endl;
}