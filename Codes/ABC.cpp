#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int a,b,c;
	cin >> a >> b >> c;
	vector<int> v1{a,b,c};
	sort(v1.begin(), v1.end());
	string s;
	cin >> s;
	for(char c : s) {
		if (c=='A')
			cout << v1[0] << " ";
		else if (c=='B')
			cout << v1[1] << " ";
		else 
			cout << v1[2] << " ";
	}
	return 0;
}