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

const int d4i[4] = {0,0,1,-1};
const int d4j[4] = {1,-1,0,0};
const int mxN = 1e2;
string s[mxN];
int n,m,si,sj;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	FOR(i,m) {
		cin >> s[i];
		FOR(j,n) {
			if(s[i][j] == 'P')
				si = i, sj = j;
		}
	}
	int vis[m][n];
	FOR(i,m)
		FOR(j,n)
			vis[i][j] = 0;

	queue<ar<int,2>> qu;
	qu.push({si,sj});
	vis[si][sj] = 1;
	s[si][sj] = '.';
	int gold = 0;
	while(qu.size()) {
		ar<int,2> u = qu.front();
		qu.pop();
		bool safe = 1;
		FOR(i,4) {
			int ni = u[0]+d4i[i], nj = u[1]+d4j[i];
			if(ni<0 || ni >= m || nj <0 || nj >= n) continue;
			if(s[ni][nj]=='#') continue;
			if(s[ni][nj]=='.' || s[ni][nj] == 'G') continue;
			if(s[ni][nj=='T']) safe = 0;
		}
		if(safe) {
			FOR(i,4) {
				int ni = u[0]+d4i[i], nj = u[1]+d4j[i];
				if(ni<0 || ni >= m || nj <0 || nj >= n) continue;
				if(s[ni][nj]=='#') continue;
				if(s[ni][nj]=='.' && vis[ni][nj]==0) {
					qu.push({ni,nj});
					vis[ni][nj] = 1;
				}
				if(s[ni][nj]=='G' && vis[ni][nj]==0) {
					++gold;
					qu.push({ni,nj});
					vis[ni][nj] = 1;
				}
			}
		}
	}
	cout << gold << endl;
}