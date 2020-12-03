#include <iostream>
#include<bits/stdc++.h>

using namespace std;

#define test(v1) for(auto &i : v1) {cout << i << endl;}
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
	string s;
	vector<string> v1;
	while(cin >> s) {	
		v1.eb(s);
	}
	set<string> s1;
	FOR(i,v1.size()) {
		for(int j=i+1; j<v1.size(); ++j){
			string s = v1[i] + v1[j];
			string b = v1[j] + v1[i];
			s1.insert(s);
			s1.insert(b);
		}
	}
	for(auto it = s1.begin(); it!=s1.end(); ++it) {
		cout << *it << endl;
	}
}