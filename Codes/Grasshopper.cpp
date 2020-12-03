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

const int di[8] = {2,2,-2,-2,1,-1,1,-1};
const int dj[8] = {1,-1,1,-1,2,2,-2,-2};
const int mxN =1e2; //max size

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int r,c,startr,startc,cloverr,cloverc;
	while(cin >> r && cin >> c && cin >> startr && cin >> startc && cin >> cloverr && cin >> cloverc) {
		queue<ar<int,2>> qu;
		/*
		char board[r][c];
		for(int i=0; i<r; ++i) {
			for(int j=0; j<c; ++j) {
				board[i][j] = '.';
			}
		}
		board[startr][startc] = 'F';
		board[cloverr][cloverc] = 'C';
		*/
		int check[r][c];
		FOR(i,r) {
			FOR(j,c) {
				check[i][j] =-1;
			}
		}
		check[startr-1][startc-1] = 0;
		qu.push({startr-1,startc-1});
		while(!qu.empty()) {
			ar<int,2> u = qu.front();
			qu.pop();
			int steps = check[u[0]][u[1]] + 1;
			FOR(k,8) {
				int ni = u[0]+di[k], nj = u[1]+dj[k];
				if(ni<0||ni>=r||nj<0||nj>=c) continue;
				if(check[ni][nj]==-1) {
					check[ni][nj] = steps;
					qu.push({ni,nj});
				}
			}
		}
		if(check[cloverr-1][cloverc-1]==-1)
			cout << "impossible" << endl;
		else {
			cout << check[cloverr-1][cloverc-1] << endl;
		}
	}
}