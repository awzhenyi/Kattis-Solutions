#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	string s;
	cin >> s;
	string d = "";
	for(char c : s) {
		if(isupper(c))
			d+=c;
	}
	cout << d;
	return 0;
}
