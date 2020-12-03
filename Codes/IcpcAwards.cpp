#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

/*int main() {
	int n;
	set<string> s1;
	vector<string> v1;
	vector<string> v2;
	cin >> n;
	while(n--) {
		string a,b;
		cin >> a >> b;
		if(s1.count(a)!=1) { 
			s1.insert(a);
			v1.push_back(a);
			v2.push_back(b);
		}
	}
	for(int i=0; i<v1.size(); ++i) {
		cout << v1[i] << " " << v2[i] << endl;
	}
}*/

int main() {
	int n;
	set<string> s1;
	cin >> n;
	int count = 0;
	while(n--) {
		string a,b;
		cin >> a >> b;
		if(count<12 && s1.count(a)!=1) {
			cout << a << " " << b << endl;
			count ++;
		}
		s1.insert(a);	
	}
	return 0;
}