#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	vector<int> v1;
	int a;
	cin >> a;
	while(a--) {
		int b;
		cin >> b;
		v1.push_back(b);
	}
	bool flag = 0;
	for(int i=0; i<v1.back(); ++i) {
		if(count(v1.begin(), v1.end(), i+1)==0){
			flag = 1;
			cout << i+1 << endl;
		}
	}
	if (!flag) {
		cout << "good job"; 
	}
	return 0;
}