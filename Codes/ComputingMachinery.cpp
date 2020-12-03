#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int p,i;
	cin >> p >> i;
	vector<int> v1;
	for(int i=0; i<p; ++i){
		int a;
		cin >> a;
		v1.push_back(a);
	}
	int time = 0;
	int pentime = 0;
	int correct = 0;
	if(v1[i] > 300)
		cout << "0 0" << endl;
	else {
		time += v1[i];
		pentime += time;
		correct++;
		v1.erase(v1.begin()+i);
		sort(v1.begin(),v1.end());
		for(int i : v1) {
			if(i<=(300-time)) {
				time += i;
				pentime += time;
				correct++;
			}
		}
		cout << correct << " " << pentime << endl;
	}
	return 0;
}