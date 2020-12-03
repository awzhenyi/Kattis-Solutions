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

int r,c;
string s[100];

const int d4i[4] = {0,0,1,-1};
const int d4j[4] = {1,-1,0,0};
const int d8i[8] = {-1,-1,0,1,1,1,0,-1};
const int d8j[8] = {0,1,1,1,0,-1,-1,-1};

void floodfill(int i, int j) {
	s[i][j] = '.';
	FOR(k,8) {
		int ni = i+d8i[k], nj = j+d8j[k];
		if(ni<0 || ni>= r || nj<0 || nj>=c) continue;
		if(s[ni][nj]=='#')
			floodfill(ni,nj);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> r >> c;
	FOR(i,r)
		cin >> s[i];
	int ans = 0;
	FOR(i,r)
		FOR(j,c) {
			if(s[i][j]=='#') {
				++ans;
				floodfill(i,j);
			}
		}
	cout << ans;
}