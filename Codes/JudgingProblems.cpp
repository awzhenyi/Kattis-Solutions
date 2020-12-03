#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n;
	cin >> n;
	vector<string> v1;
	vector<string> v2;
	for(int i=0; i<n; ++i) {
		string s;
		cin >> s;
		v1.push_back(s);
	}
	for(int i=0; i<n; ++i) {
		string s;
		cin >> s;
		v2.push_back(s);
	}
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	int correct = 0;
	//MERGE PROCEDURE OF MERGE SORT TO COUNT COMMON INPUTS?
	
	for(int i=0; i<v1.size(); ++i) {
		if(v1[i]==v2[i])
			correct ++;
	}
	cout << correct;
}