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
string s[2000];
//const int d8i[8] = {-1,-1,0,1,1,1,0,-1};
//const int d8j[8] = {0,1,1,1,0,-1,-1,-1};
const int d2i[2] = {1,-1};
const int d2j[2] = {0,0};

//const int d4i[4] = {0,0,1,-1};
//const int d4j[4] = {1,-1,0,0};

int floodfill(int i, int j) {
	bool ok = 1;
	while(i<r) {
		++i;
		if(s[i][j]=='_')continue;
		if(s[i][j]=='$') {
			ok = 0;
			break; 
		}
	}
	if(ok) return 1;
	else return 0;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> r >> c;
	FOR(i,r)
		cin >> s[i];

	int ans = 0;

	FOR(j,c) {
		if(s[0][j]=='$')continue;
		else ans+=floodfill(0,j);
	}
	cout << ans+1 << endl;
}