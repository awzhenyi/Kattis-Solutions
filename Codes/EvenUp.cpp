#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N; cin >> N;
	stack<int> s1;
	while(N--) {
		int a; cin >> a; 
		if(!s1.empty()) {
			if((s1.top()+a)%2==0)
				s1.pop();
			else {
				s1.push(a);
			}
		} else {
			s1.push(a);
		}
	}
	cout << s1.size() << endl;
	return 0;
}