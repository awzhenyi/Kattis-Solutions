#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n;
	cin >> n;
	vector<string> v1;
	while(n--) {
		int a;
		string b;
		cin >> a >> b;
		if(cin.fail()) {
			cin.clear();
			cin.ignore();
			cin >> b >> a;
			string s = to_string(a) + b;
			v1.push_back(s);
		} else {
			a/=2;
			string s = to_string(a) + b;
			v1.push_back(s);
		}
		sort(v1.begin(),v1.end());
		for(auto &s : v1)
			cout << s << endl;
	}
	return 0;
}