#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	vector<string> v1,v2,v3;
	int names;
	cin >> names;
	while(names--) {
		string s;
		cin >> s;
		v1.push_back(s);
	}
	v2 = v1;
	v3 = v1;
	sort(v2.begin(),v2.end());
	sort(v3.begin(),v3.end(),greater<string>());
	if (v1 == v2) {
		cout << "INCREASING";
	} else if (v1 == v3) {
		cout << "DECREASING";
	} else {
		cout << "NEITHER";
	}
	return 0;
}