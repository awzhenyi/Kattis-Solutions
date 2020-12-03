#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	vector<int> v1;
	for(int i=0; i<6; ++i) {
		int a;
		cin >> a;
		v1.push_back(a);
	}
	sort(v1.begin(),v1.end(),greater<int>());
	int t1, t2;
	cin >> t1 >> t2;
	int base = v1[0];
	int t1a = t1-base;//29
	int t2a = t2-base;//61
	int base2=0, base3=0;
	v1.erase(v1.begin());
	for(int i=0; i<v1.size()-1; ++i) {
		for(int j=1; j<v1.size(); ++j) {
			if(v1[i]+v1[j]==t1a || v1[i]+v1[j]==t2a) {
				base2 = v1[i];
				base3 = v1[j];
			}
		}
	}
	cout << base << " " << base2 << " " << base3 << " ";
	//since all values are unique
	for(int i : v1) {
		if(i!=base2 && i!=base3)
			cout << i << " ";
	}
	return 0;
}