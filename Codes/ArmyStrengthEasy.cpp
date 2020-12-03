#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int cases;
	cin >> cases;
	for(int i=0; i<cases; ++i) {
		int g,m;
		cin >> g >> m;
		vector<int> vg;
		vector<int> vm;
		for(int i=0; i<g; ++i) {
			int a;
			cin >> a;
			vg.push_back(a);
		}
		for(int i=0; i<m; ++i) {
			int a;
			cin >> a;
			vm.push_back(a);
		}
		sort(vg.begin(),vg.end());
		sort(vm.begin(),vm.end());
		if(vg.back() >= vm.back()) {
			cout << "Godzilla" << endl;
		} else {
			cout << "MechaGodzilla" << endl;
		}
	}
		/*while(vg.size()!=0 || vm.size()!=0) {
			if(vm[0] < vg[0])
				vm.erase(vm.begin());
			else if(vm[0] > vg[0])
				vg.erase(vg.begin());
			else
				vm.erase(vm.begin());
		}
		if(vg.size()==0)
			cout << "MechaGodzilla" << endl;
		else
			cout << "Godzilla" << endl;
	}*/
	return 0;
}