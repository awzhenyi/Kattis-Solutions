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
	multiset<ii,greater<ii>> quest;
	//multiset<pair<int,int>, greater<pair<int,int>>
	int N; cin >> N;
	while(N--) {
		ll gold = 0;
		string cmd;
		cin >> cmd;
		if(cmd == "add") {
			int e,g; cin >> e >> g;
			quest.insert(mp(e,g));
		}
		else if(cmd == "query") {
			int e; cin >> e;
			while(e>0) {
				auto it = quest.lower_bound({e, INT_MAX});
				if(it == quest.end())
					break;
				e -= it->first;
				gold += it->second;
				quest.erase(it);
			}
			cout << gold << endl;	
		}
	}
	return 0;
}