#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N; cin >> N;
	cin.ignore();
	int counter = 0;
	while(N--) {
		int items; cin >> items;
		cin.ignore();
		string name; getline(cin,name);
		bool check1 = 0;
		bool check2 = 0;
		for(int i=0; i<items; ++i) {
			string s; getline(cin,s);
			if(s=="pea soup")
				check1 = 1;
			else if (s=="pancakes")
				check2 = 1;
		}
		if(check1==1 && check2==1) {
			counter++;
			cout << name << endl;
			return 0;
		}
	}
	cout << "Anywhere is fine I guess" << endl;
	return 0;
}
