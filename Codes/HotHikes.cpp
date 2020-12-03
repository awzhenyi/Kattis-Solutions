#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n;
	cin >> n;
	vector<int> v1;
	while(n--) {
		int b;
		cin >> b;
		v1.push_back(b);
	}
	int temp = max(v1[0],v1[2]);
	int index = 1;
	for(int i=0; i<v1.size()-2; ++i) {
		if (max(v1[i],v1[i+2]) < temp) {
			temp = max(v1[i],v1[i+2]);
			index = i+1;
		}
	}
	cout << index << " " << temp;
	return 0;

}