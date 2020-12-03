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
	unordered_map<string,int> m1;
	while(N--) {
		vector<int> v1;
		FOR(i,5) {
			int a; cin >> a;
			v1.eb(a);
		}
		sort(v1.begin(),v1.end());
		string s = "";
		for(auto &i : v1) {
			s += to_string(i);
		}
		if(!m1.count(s)) {
			m1[s] = 1;
		} else {
			m1[s] += 1;
		}
	}
	int max = 0;
	for(auto &k : m1) {
		if(k.second > max) {
			max = k.second;
		}
	}	
	int count = 0;
	for(auto &k : m1) {
		if(k.second == max) {
			count += k.second;
		}
	}
	cout << (count==1?m1.size():count) << endl;
}
	
