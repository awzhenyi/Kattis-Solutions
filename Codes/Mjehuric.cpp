#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	//BUBBLE SORT SIMULATION
	vector<int> v1;
	int a;
	while(cin>>a) {
		v1.push_back(a);
	}
	bool swapped = 0;
	for(int i=0; i<v1.size()-1; ++i) {
		for(int j=0; j<v1.size()-i-1; j++) {
			if(v1[j] > v1[j+1]) {
				swap(v1[j], v1[j+1]);
				swapped = 1;
				for(auto &i : v1)
					cout << i << " ";
				cout << endl;
			}
		}
		if (swapped == 0)
			break;
	}
	return 0;
}