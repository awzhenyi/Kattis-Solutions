#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int s,t,n;
	cin >> s >> t >> n;
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	for(int i=0; i<n+1; ++i) {	
		int a;
		cin >> a;
		v1.push_back(a);
	}

	for(int i=0; i<n; ++i) {
		int a;
		cin >> a;
		v2.push_back(a);
	}
	for(int i=0; i<n; ++i) {
		int a;
		cin >> a;
		v3.push_back(a);
	}
	//start time
	int time = s;
	//walk to first bus stop
	time += v1[0];
	//now loop remaining "arrays" of same size
	for(int i=0; i<n; ++i) {
		while(time%v3[i]!=0)
			time++;
		time += v2[i];
		time += v1[i];
	}
	cout << ((time <= t)?"yes" : "no") << endl;

}