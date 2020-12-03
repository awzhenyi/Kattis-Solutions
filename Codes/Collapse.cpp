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

//vt<vt<ii>> adj;
//vt<bool> die;
//vt<int> goods;
//vt<int> remain;

const int mxN = 1e5;
vt<ii> adj[mxN];
vt<bool> die(mxN);
vt<int> goods(mxN);
vt<int> remain(mxN);

void dfs(int u) {
	if(die[u]==1)return;
	die[u] = 1;
	for(int i=1; i<mxN; ++i) {
		if(i==u)continue;
		else {
			for(auto &x : adj[i]) {
				if(x.first == u) {
					remain[i] -= x.second;
					if(remain[i] < goods[i])
						dfs(i);
				}
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n; cin >> n;
	//adj.assign(n,vt<ii>());
	//goods.assign(n,0);
	//die.assign(n,0);
	//remain.assign(n,0);
	for(int i=0; i<n; ++i) {
		int g; cin >> g;
		goods[i] = g;
		int p; cin >> p;
		while(p--) {
			int u,v; cin >> u >> v;
			--u;
			adj[i].pb({u,v});
			remain[i] += v;
		}
	}
	dfs(0);
	int sum = 0;
	for(int i=0; i<n; ++i) {
		sum += die[i];
	}
	cout << n-sum << endl;
}