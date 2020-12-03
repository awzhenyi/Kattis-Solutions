#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	stack<char> s1;
	stack<double> s2;
	string s; getline(cin, s);
	for(auto &c : s) {
		if(c==' ')
			continue;
		else if(c=='('||c=='+'||c=='-'||c=='*'||c=='/')
			s1.push(c);	
	}
}
