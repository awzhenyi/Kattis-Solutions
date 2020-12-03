#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	string mapper = "1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	string s;
	while(getline(cin,s)) {
		for(auto &c : s) {
			if (c == ' ')
				cout << ' ';
			else {
				for(int i=0; i<mapper.length(); ++i)	
					if(c == mapper[i])
						cout << mapper[i-1];
			}
		}
		cout << endl;
	}
	return 0;
}