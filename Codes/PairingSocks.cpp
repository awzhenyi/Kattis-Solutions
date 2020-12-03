#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N; cin >> N;
	stack<int> ogStack;
	for(int i=0; i<2*N; ++i) {
		int a; cin>>a;
		ogStack.push(a);
	}
	stack<int> s1;
	int moves = 0;
	while(!ogStack.empty()) {
		if(s1.empty()) {
			s1.push(ogStack.top());
			ogStack.pop();
			moves++;
		}
		if(ogStack.top() == s1.top()) {
			ogStack.pop();
			s1.pop();
			moves++;
		} else {
			s1.push(ogStack.top());
			ogStack.pop();
			moves++;
		}
	}
	if(!s1.empty()) {
		cout << "impossible" << endl;
	} else {
		cout << moves << endl;
	}
	return 0;
}
