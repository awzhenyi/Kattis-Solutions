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
	unordered_set<string> s1;
	int N; cin >> N;
	cin.ignore();
	FOR(i,N) {
		string x; getline(cin, x);
		istringstream iss(x);
		string s;
		while(iss >> s) {
			if(s=="->") {
				string a; iss >> a;
				s1.insert(a);
			} else {
				if(s1.count(s)!=1) {
					cout << i+1 << endl;
					return 0;
				}
			}
		}
	}	
	cout << "correct" << endl;
	return 0;
}
