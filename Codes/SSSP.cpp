#include <iostream>
#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define is pair<int,string>
#define ii pair<int,int>
#define iii tuple<int,int,int>
#define mp make_pair
#define FOR(i,n) for(int i=0; i<n; ++i)
#define pb push_back
#define eb emplace_back
#define ar array
#define vt vector
#define EACH(i,x) for(auto &i : x)

//hint given: use bfs since K is small < 30.
//some way to track distance in bfs using distance matrix
//first item is node, second is depth

vt<vt<ii>> adj;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int TC; cin >> TC;
	while(TC--) {
		int vertex; cin >> vertex; //number of vertexs
		adj.assign(vertex, vt<ii>());
		int dist[vertex][31];
		FOR(i,vertex) {
			int edges; cin >> edges;//number of edges for each vertex  // i is the edge number.
			FOR(j,edges) {
				int u,w; cin >> u >> w; //link + weight
				adj[i].pb({u,w}); //directed so only push back once
			}
		}
		int query; cin >> query;
		while(query--) {
			int s,t,k; cin >> s >> t >> k; //start,end,max vertexes
			fill(dist[0], dist[0] + vertex * 31, INT_MAX); // initialise distance matrix with max distance. rows = vertex, cols = junctions. max junctions = 30
            FOR(i,31) {
                dist[s][i] = 0;
            }			
            priority_queue<iii, vt<iii>, greater<iii>> pq;
			pq.push(make_tuple(0,s,0)); //push distance(?),start point,how many vertex traversed(?)
			bool reached = 0;
			while(pq.size()) {
				iii u = pq.top();
				pq.pop();
				if(get<1>(u)==t){reached=1;break;} //reached
				if(get<2>(u)>=k-1) continue; //exceed number of junctions allowed
				else{
					EACH(n, adj[get<1>(u)]) {
						//n.first -> vertex, n.second -> weights
						if(n.second + get<0>(u) < dist[n.first][get<2>(u)+1]) {//this is gonna be infinity at first, but update if dist combined is less;
							dist[n.first][get<2>(u)+1] = n.second + get<0>(u); //update
							pq.push(make_tuple(n.second+get<0>(u), n.first, get<2>(u)+1));//push distance, vertex, +1 K
						}
					}
				}
			}
			int ans = INT_MAX;
            if(reached) {
                for(int i = 0; i < 31; ++i) {
                    if(dist[t][i] < ans)
                        ans = dist[t][i];
                }
                cout << ans << endl; 
            } else {
                cout << -1 << endl;
            }
        }
        cout << endl;
	}
}