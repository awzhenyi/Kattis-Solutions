#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int TC; cin >> TC;
	while(TC--) {
		string a; cin >> a;
		stack<char> s1;
		bool fail = 0;
		int check = 0;
		for (char c : a) {
			if(c == '.') {
				continue;
			}
			else if(c=='$'||c=='|'||c=='*') {
				s1.push(c);
			}
			else if(c=='t') {
				if(s1.empty()) {
					fail = 1;
					break;
				}
				if(s1.top()!='|'||s1.empty()) {
					fail = 1;
					break;
				} else {
					s1.pop();
				}
			}
			else if(c=='b') {
				if(s1.empty()) {
					fail = 1;
					break;
				}
				if(s1.top()!='$'||s1.empty()) {
					fail = 1;
					break;
				} else {
					s1.pop();
				}
			}
			else if(c=='j') {
				if(s1.empty()) {
					fail = 1;
					break;
				}
				if(s1.top()!='*') {
					fail = 1;
					break;
 				} else {
 					s1.pop();
 				}
			}
		}
		if(fail == 1) {
			cout << "NO" << endl;
		} else if(s1.empty()) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
