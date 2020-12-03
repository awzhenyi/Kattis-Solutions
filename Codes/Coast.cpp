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

//const int mxN = 1e3;
const int d4i[4] = {0,0,1,-1};
const int d4j[4] = {1,-1,0,0};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int m,n; cin >> m >> n;
	vt<vt<char>> grid;
    grid.resize(m+2, vt<char>(n+2,'0'));
    
    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> grid[i][j];
        }
    }
    int ans = 0;
    vt<vt<char>> vis;
    vis.resize(m+2, vt<char>(n+2,'0'));
    for(int i=0; i<m+2; ++i) {
    	for(int j=0; j<n+2; ++j) {
    		if((i==0 || i==m+1 || j==0 || j==n+1) && grid[i][j]=='0' && vis[i][j]=='0') {
    			vis[i][j]='1';
	    		queue<ar<int,2>> qu;
	    		qu.push({i,j});
	    		while(qu.size()) {
	    			ar<int,2> u = qu.front();
	    			qu.pop();
	    			FOR(i,4) {
	    				int ni = u[0]+d4i[i], nj = u[1]+d4j[i];
	    				if(ni<0 || ni>=m+2 || nj<0 || nj>=n+2)continue;
	    				if(grid[ni][nj]=='0' && vis[ni][nj]=='0') {
	    					vis[ni][nj] = '1';
	    					qu.push({ni,nj});
	    				}
	    				if(grid[ni][nj]=='1') ++ans;
	    			}
	    		}
	    	}
    	}
    }
    cout << ans;
}



