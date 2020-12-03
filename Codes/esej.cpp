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


void generate() {
	string s = "";
	int n;
	n = rand()%10 + 2;
	FOR(i,n) {
		char c = 'a' + rand()%26;
		s += c;
	}
	cout << s << " ";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int A,B; cin >> A >> B;
	while(B--) {
		generate();
	}
}
