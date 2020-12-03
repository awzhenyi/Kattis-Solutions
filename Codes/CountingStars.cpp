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

const int mxN = 100;
int r,c;
string s[mxN];

const int d4i[4] = {0,0,1,-1};
const int d4j[4] = {1,-1,0,0};

void floodfill(int i, int j) {
	s[i][j] = '#';
	FOR(k,4) {
		int ni = i + d4i[k], nj = j + d4j[k];
		if(ni<0 || ni >= r || nj<0 || nj>=c)continue;
		if(s[ni][nj]=='-')
			floodfill(ni,nj); 
	}
}

void solve() {
	FOR(i,r)
		cin >> s[i];
	int ans = 0;
	FOR(i,r)
		FOR(j,c) 
			if(s[i][j] == '-') {
				++ans;
				floodfill(i,j);
			}

	cout << ans << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int i = 1;
	while(cin >> r >> c) {
		cout << "Case " << i << ": ";
		solve();
		++i;
	}
}