#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	string s;
	cin >> s;
	for(int i=0; i<s.length(); ++i) {
		if(s[i] == s[i+1])
			continue;
		else
			cout << s[i];
	}
	return 0;
}