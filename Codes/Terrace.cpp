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
	int c,r; cin >> c >> r;
	int board[r][c];
	bool vis[r][c];
	FOR(i,r) {
		FOR(j,c) {
			cin >> board[i][j];
		}
	}
	FOR(i,r) {
		FOR(j,c) {
			vis[i][j] = 0;
		}
	}
	int ans = 0;
	FOR(i,r) {
		FOR(j,c) {
			if(vis[i][j]==1)continue;
			vis[i][j] = 1;
			queue<ar<int,2>> qu;
			qu.push({i,j});
			int counter = 0;
			bool safe = 1;
			while(qu.size()) {
				counter++;
				ar<int,2> u = qu.front();
				qu.pop();
				FOR(k,4) {
					int ni = u[0]+d4i[k], nj = u[1]+d4j[k];
					if(ni<0 || ni>=r || nj<0 || nj>=c) continue;
					if(board[ni][nj] < board[u[0]][u[1]]) safe = 0;
					if(board[ni][nj]==board[u[0]][u[1]] && vis[ni][nj]==0) {
						vis[ni][nj] = 1;
						qu.push({ni,nj});
					}
				}
			}
			if(safe) ans+=counter;
		}
	}
	cout << ans;
}



/*void terraces() {
	int x, y;
	cin >> y >> x;
	vector <vector<int>>grid(x, vector<int>(y));
	vector <vector<bool>>visited(x, vector<bool>(y,false));
	FOR(i, x) {
		FOR(j, y) {
			cin >> grid[i][j];
		}
	}
	queue <ii> q;
	int dir[][2] = { {0,1},{0,-1},{1,0},{-1,0} };
	int total = 0;
	FOR(i, x) {
		FOR(j, y) {
			if (visited[i][j]) continue;
			q.push(make_pair(i, j));
			visited[i][j] = true;
			int count = 0;
			bool small = true;
			while (!q.empty()) {
				count++;
				int curr_i = q.front().first, curr_j = q.front().second;
				int curr_height = grid[curr_i][curr_j];
				q.pop();
				
				
				FOR(k, 4) {
					int i_n = curr_i + dir[k][0], j_n = curr_j + dir[k][1];
					
					if (i_n < 0 || i_n >= x || j_n < 0 || j_n >= y) continue;
					int h_n = grid[i_n][j_n];
					if (h_n > curr_height) continue;
					if (!visited[i_n][j_n] && h_n == curr_height) {
						q.push(make_pair(i_n, j_n));
						visited[i_n][j_n] = true;
					}
					if (h_n < curr_height)
						small = false;
				}
			}
			if (small) total += count;
		}
	}
	cout << total;*/