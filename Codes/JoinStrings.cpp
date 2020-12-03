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
	int N; cin >> N;
	list<string> l1[N];
	FOR(i,N) {
		string s; cin >> s;
		l1[i].eb(s);
	}
	int check = 0;
	int a, b;
	FOR(i, N-1) {
		cin >> a >> b;
		--a; --b;
		check = a; 
		l1[a].splice(l1[a].end(), l1[b]);
	}
	for(auto &c : l1[check]) {
		cout << c;
	}
	cout << endl;
	return 0;

}