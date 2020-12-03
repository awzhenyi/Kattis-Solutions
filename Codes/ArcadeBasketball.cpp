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

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,p,m; cin >> n >> p >> m;
	map<string, int> m1;
	FOR(i,n) {
		string s; cin >> s;
		m1[s] = 0;
	}
	bool win = 0;
	set<string> players;
	FOR(i,m) {
		string s;
		int a;
		cin >> s >> a;
		m1[s] += a;
		if(m1[s] >= p && players.count(s)!=1) {
			win = 1;
			players.insert(s);
			cout << s << " wins!" << endl;
		}
	} 
	if(!win) {
		cout << "No winner!" << endl;
	}
	return 0;
}