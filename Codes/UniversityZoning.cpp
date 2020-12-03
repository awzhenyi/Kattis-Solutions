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
#define iii tuple<int,int,int>

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int r,c,f,s,g;
	cin >> r >> c >> f >> s >> g;
	//cin.ignore();
	vt<vt<ii>> faculty(f+1);
	for(int i=1; i<=f; ++i) {
		int k; cin >> k;
		FOR(j,k) {
			int u,v; cin >> u >> v;
			faculty[i].pb({u,v});
		}
		sort(faculty[i].begin(), faculty[i].end()); //sort by top left cell
	}
	vt<vt<iii>> students(f+1);
	for(int i=0; i<s; ++i) {
		int a,b,c,d; cin >> a >> b >> c >> d; // d = faculty number;
		students[d].pb(make_tuple(c,a,b)); //student number = c; a,b = coordinates
	}
	for(auto &fac : students) {
		sort(fac.begin(), fac.end()); //sort by student number to go into the top left cell;
	}
	vt<int> check(f+1);
	for(int i=1; i<=f; ++i) {
		cin>>check[i];
	} 
	vt<vt<ll>> dist(f+1);
	for(int i=1; i<=f; ++i) {
		for(int j=0; j<students[i].size(); ++j) {
			ll d = abs(faculty[i][j].first - get<1>(students[i][j])) + abs(faculty[i][j].second - get<2>(students[i][j]));
			//cout << d << endl;
			dist[i].pb(d);
		}
		sort(dist[i].begin(), dist[i].end());
	}

	vt<ll> target(f+1, 0);
	for(int i=1; i<=f; ++i) {
		for(int j=0; j<check[i]; ++j) {
			target[i] += dist[i][j]; 	
		}
	}
	sort(target.begin(), target.end());
	ll ans = 0;
	for(int i=1; i<=g; ++i) {
		ans += target[i]; 
	}
	cout << ans << endl;
}