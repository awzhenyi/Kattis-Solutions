#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	set<string> s1;
	string s;
	while(cin>>s) {
		if(s1.count(s)==1) {
			cout << "no" << endl;
			return 0;
		} else {
			s1.insert(s);
		}
	}
	cout << "yes" << endl;
	return 0;
}