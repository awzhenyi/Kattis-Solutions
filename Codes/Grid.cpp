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

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int board[500][500];
	FOR(i,500)
		FOR(j,500)
			board[i][j] = 0;
	string s[500];
	int n,m;
	cin >> n >> m;
	FOR(i,n)
		cin >> s[i];
	queue<ar<int,2>> qu;
	qu.push({0,0});
	while(qu.size()) {
		ar<int,2> u = qu.front();
		qu.pop();
		int d = board[u[0]][u[1]];
		int steps = (s[u[0]][u[1]] - '0');
		int d4i[4] = {0,0,steps,-steps};
		int d4j[4] = {steps,-steps,0,0};
		FOR(i,4) {
			int ni = u[0]+d4i[i], nj = u[1]+d4j[i];
			if(ni<0 || ni>=n || nj<0 || nj >= m) continue;
			if(board[ni][nj]==0) {
				board[ni][nj] = d+1;
				qu.push({ni,nj});
			}
		}
	}
	if(board[n-1][m-1]==0) {
		cout << -1;
	} else {
		cout << board[n-1][m-1];
	}
}