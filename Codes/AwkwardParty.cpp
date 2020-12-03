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
	int N; cin >> N;
	map<int,vt<int>> m1;
	int a;
	FOR(i,N) {
		cin >> a;
		m1[a].eb(i);
	}
	int ans = N;
	EACH(i,m1) {
		FOR(j, i.second.size()-1) {
			ans = min(ans, i.second[j+1]-i.second[j]);
		}
	}
	cout << ans;
}