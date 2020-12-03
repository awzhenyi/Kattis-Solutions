#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//set compare condition to first 2 index of string
bool compare(string a, string b) {
	return (a.substr(0,2) < b.substr(0,2));
}

int main() {
	int n;
	while(cin>>n && n!=0) {
		vector<string> v1;
		for(int i=0; i<n; ++i) {
			string s;
			cin >> s;
			v1.push_back(s);
		}
		stable_sort(v1.begin(), v1.end(), compare);
		for (string s :v1)
			cout << s << endl;
		cout << endl;
	}
	return 0;
}