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

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	set<string> words;
	while(cin >> s) {
		string a = "";
		FOR(i,s.length()) {
			a += tolower(s[i]);
		}
		if(words.count(a)==0) {
			words.insert(a);
			cout << a << " ";
		} else {
			cout << ". ";
		}
	}
	return 0;
}