#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	string s; cin >> s;
	deque<char> q1;
	for(auto c: s) {
		if(c=='<')
			q1.pop_back();
		else
			q1.push_back(c);
	}
	for(auto &c : q1)
		cout << c;
	return 0;
}