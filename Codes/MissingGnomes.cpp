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
	int n,m; cin >> n >> m;
	set<int> s1;
	deque<int> v1;
	deque<int> v2;
	FOR(i,m) {
		int a;
		cin >> a;
		s1.insert(a);
		v1.eb(a);
	}
	for(int i = 1; i <= n; ++i) {
		if(s1.count(i)!=1) {
			v2.eb(i);
		}
	}
	int t1,t2;
	while(v1.size() || v2.size()) {
		if(v1.size()) {
			t1 = v1.front();
		} else {
			t1 = INT_MAX;
		}
		if(v2.size()) {
			t2 = v2.front();
		} else {
			t2 = INT_MAX;
		}
		if(t1<t2) {
			cout << t1 << endl;
			v1.pop_front();
		} else {
			cout << t2 << endl;
			v2.pop_front();
		}
	}
	return 0;
	
}