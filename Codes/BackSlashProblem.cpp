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


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a; 
	while(cin >> a) {
		cin.ignore();
		string s;
		getline(cin,s);
		int bs = pow(2,a)-1;
		EACH(c,s) {
			if(('!' <= c && c <= '*') || ('[' <= c && c <= ']')) {
				FOR(i,bs) 
					cout << '\\';
				cout << c;
			} else {
				cout << c;
			}
		}
		cout << endl;
	}
}