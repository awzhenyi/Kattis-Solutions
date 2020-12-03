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

//BFS. 2D grid, any form of moving, target cell. 
//target cell = 1,1, knight moves in L shape, max 8 possible movements
//sssp on unweighted graph-> each operation same cost

const int d4i[8] = {-1,-1,0,1,1,1,0,-1}
const int d4j[8] = {}
const int di[8] = {2,2,-2,-2,1,-1,1,-1};
const int dj[8] = {1,-1,1,-1,2,2,-2,-2};
const int mxN =1e2; //max size


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); 
	string s[mxN];
	int N; cin >> N;
	int si, sj;
	FOR(i,N) {
		cin >> s[i];
		FOR(j,N) {
			if(s[i][j]=='K') {
				if(i==0&&j==0) {
					cout << 0;
					return 0;
				}
				si = i, sj = j;
			}
		}
	}
	queue<ar<int,2>> qu;
	qu.push({si,sj});
	int check[N][N];
	FOR(i,N) {
		FOR(j,N) {
			check[i][j] = -1;
		}
	}
	check[si][sj] = 0;
	while(!qu.empty()) {
		ar<int,2> u = qu.front();
		qu.pop();
		int steps = check[u[0]][u[1]] + 1;
		for(int k=0 ; k<8 ; ++k) {
			int ni=u[0]+di[k], nj=u[1]+dj[k];
			if(ni<0||ni>=N||nj<0||nj>=N||s[ni][nj]=='#')
				continue;
			if(s[ni][nj]!='#' && check[ni][nj]==-1){
				check[ni][nj] = steps;
				qu.push({ni,nj});
			}
		}
	}
	cout << check[0][0] << endl;
	return 0;
}

