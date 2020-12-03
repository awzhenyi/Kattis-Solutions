#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int cases;
	cin >> cases;
	while(cases--) {
		int n;
		cin >> n;
		set<string> s1;
		for(int i=0; i<n; ++i) {
			string s;
			cin >> s;
			if(s1.count(s)!=1)
				s1.insert(s);
		}
		cout << s1.size() << endl;
	}
	return 0;
}