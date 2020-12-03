#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n;
	cin >> n;
	while(n--) {
		string s;
		cin >> s;
		//padding asterisk
		int len = s.length();
		int nearest = ceil(sqrt(len));
		int sq = nearest*nearest;
		for(int i=0; i<(sq-len); ++i) {
			s += '*';
		}
		//forming array;
		char arr[nearest][nearest];
		for(int i=0; i<nearest; ++i)
			for(int j=0; j<nearest; ++j)
				arr[i][j] = s[i*nearest+j];
		//rotate
		char rotate[nearest][nearest];
		for(int i=0; i<nearest; ++i) {
			for(int j=0; j<nearest; ++j) {
				rotate[j][i] = arr[i][j];
			}
		}

		for(int i=0; i<nearest; ++i) {
			for(int j=nearest-1; j>=0; --j) {
				if(rotate[i][j]!='*') {
					cout << rotate[i][j];
				}
			}
		}
		cout << endl;
		
	}
}