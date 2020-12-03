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

const int mxN =1e2; //max size
int n,m;
string s[mxN];

bool e(int i, int j) {
	return i>=0&&i<n&&j>=0&&j<m&&s[i][j]=='#';
}

void dfs(int i, int j) {
	s[i][j] = '.';
	if(e(i-1,j))
		dfs(i-1,j);
	if(e(i+1,j))
		dfs(i+1,j);
	if(e(i,j-1))
		dfs(i,j-1);
	if(e(i,j+1))
		dfs(i,j+1);
	if(e(i-1,j-1))
		dfs(i-1,j-1);
	if(e(i-1,j+1))
		dfs(i-1,j+1);
	if(e(i+1,j+1))
		dfs(i+1,j+1);
	if(e(i+1,j-1))
		dfs(i+1,j-1);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	FOR(i,n) {
		cin >> s[i];
	}
	int ans = 0;
	FOR(i,n) {
		FOR(j,m) {
			if(e(i,j)) {
				dfs(i,j);
				ans++;
			}
		}
	}
	cout << ans;
}