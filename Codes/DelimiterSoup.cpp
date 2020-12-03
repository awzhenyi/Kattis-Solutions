#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	stack<char> s1;
	int N; cin >> N;
	cin.ignore();
	string s; getline(cin, s);
	int index = 0;
	for(auto &c : s) {
		if(c == ' ') {
			if(s1.empty()) {
				s1.push(c);
				index++;
			} else {
				index++;
			}
		} else if(c=='(') {
			s1.push(c);
			index++;
		} else if(c=='[') {
			s1.push(c);
			index++;
		} else if(c=='{') {
			s1.push(c);
			index++;
		} else if (!s1.empty() && c=='}') {
			if(s1.top()=='{') {
				s1.pop();
				index++;
			} else {
				cout << "} " << index << endl;
				return 0;
			}
		} else if(!s1.empty() && c==')') {
			if(s1.top()=='(') {
				s1.pop();
				index++;
			} else {
				cout << ") " << index << endl;
				return 0;
			}
		} else if (!s1.empty() && c==']') {
			if (s1.top()=='[') {
				s1.pop();
				index++;
			} else {
				cout << "] " << index << endl;
				return 0;
			}
		} else {
			cout << c << " " << index << endl;
			return 0;
		}
	}
	cout << "ok so far" << endl;
	return 0;
}