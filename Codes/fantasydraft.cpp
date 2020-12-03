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

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k; cin >> n >> k;
	vector<deque<string>> coach(n);
	vector<vector<string>> draft(n);

	FOR(i,n) {
		int m; cin >> m;
		while(m--) {
			string s; cin >> s;
			coach[i].push_back(s);
		}
	}
	int num; cin >> num;
	set<is> players;
	set<string> players_picked;
	map<string,int> id;
	FOR(i,num) {
		string s; cin >> s;
		players.insert({i,s});
		id[s] = i;
	}
	for(int i=0; i<k; ++i) {//num of selection rounds/size of each team//2
		for(int j=0; j<n; ++j) {//how many coaches//2
			bool pick = 0;
			while(!pick && coach[j].size()>0) {
				string pp = coach[j].front();
				coach[j].pop_front();
				if(players_picked.count(pp)!=1) {
					players_picked.insert(pp);
					draft[j].pb(pp);
					int idx = id[pp];
					players.erase({idx,pp});
					pick = 1;
				}
			}
			if(!pick) {
				auto it = players.begin();
				string name = it->second;
				draft[j].pb(name);
				players_picked.insert(name);
				players.erase(it);
			}
		}
	}
	FOR(i,n) {
		FOR(j,draft[i].size()) {
			cout << draft[i][j] << " ";
		}
		cout << endl;
	}
}