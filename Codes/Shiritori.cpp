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

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n; cin >> n;
	bool player1 = true;
	bool player2 = false;
	string prev = "";
	set<string> words;
	while(n--) {
		string s;
		cin >> s;
		if(prev=="") {
			prev = s;
			words.insert(s);
		} else {
			if(prev.back()!=s[0]) {
				cout << (player1?"Player 1 lost":"Player 2 lost");
				return 0; 
			} else if (words.count(s)==1) {
				cout << (player1?"Player 1 lost":"Player 2 lost");
				return 0;
			} 
			else {
				words.insert(s);
				prev = s;
			}
		}
		player1 = !player1;
		player2 = !player2;
	}
	cout << "Fair Game" << endl;
	return 0;
}