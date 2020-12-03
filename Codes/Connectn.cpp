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

map<int,string> diagd;
map<int,string> diagu;
map<int,string> hori;
map<int,string> vert;
string s[100];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int r,c,n;
	cin >> r >> c >> n; cin.ignore();
	FOR(i,r) {
		string st;
		getline(cin,st);
		st.erase(remove(st.begin(),st.end(),' '),st.end());
		s[i] = st;
	}
	FOR(i,r)
		FOR(j,c) {
			if(s[i][j]==' ')continue;
			diagd[i-j] += s[i][j];
			hori[i] += s[i][j];
			vert[j] += s[i][j];
			diagu[i+j] += s[i][j];
		}
	bool red = 0;
	bool blue = 0;
	string bblue = string(n,'B');
	string rred = string(n,'R');
	EACH(i,hori) {
		if(strstr(i.second.c_str(),bblue.c_str()))
			blue = 1;
		else if(strstr(i.second.c_str(),rred.c_str()))
			red = 1;
	}
	EACH(i,vert) {
		if(strstr(i.second.c_str(),bblue.c_str()))
			blue = 1;
		else if(strstr(i.second.c_str(),rred.c_str()))
			red = 1;
	}
	EACH(i,diagd) {
		if(strstr(i.second.c_str(),bblue.c_str()))
			blue = 1;
		else if(strstr(i.second.c_str(),rred.c_str()))
			red = 1;
	}
	EACH(i,diagu) {
		if(strstr(i.second.c_str(),bblue.c_str()))
			blue = 1;
		else if(strstr(i.second.c_str(),rred.c_str()))
			red = 1;
	}
	if(red==1) {
		cout << "RED WINS";
		return 0;
	}
	else if(blue==1) {
		cout << "BLUE WINS";
		return 0;
	} else {
		cout << "NONE";
		return 0;
	}
}