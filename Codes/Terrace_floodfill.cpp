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

bool vis[500][500] = {0};
int board[500][500];

int floodfill(int i, int j, int r, int c) {
	int ans = 0;
	vis[i][j] = 1;
	bool safe = 1;
	FOR(k,4) {
		int ni = i+d4i[k], nj = j+d4j[k];
		if(ni<0 || ni>=r || nj<0 || nj>=c)continue;
		if(board[ni][nj] < board[i][j]) safe = 0;
		if(board[ni][nj] > board[i][j]) {
			++ans;
			floodfill(ni,nj,r,c);
		}
	}
	return ans;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int c,r; cin >> c >> r;
	FOR(i,r) {
		FOR(j,c) {
			cin >> board[i][j];
		}
	}
	int ans =0;
	FOR(i,r) {
		FOR(j,c)  {
			if(vis[i][j]==1)continue;
			ans += floodfill(i,j,r,c);
		}
	}

	cout << ans;
}