#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	//wasted votes = total votes - half+1
	//efficiency gap = abs(Wa-Wb)/total votes	
	int p,d;
	cin >> p >> d;
	map<int,vector<int>>m1;
	while(p--) {
		int a,b,c;
		cin >> a >> b >> c;
		if(m1.count(a)==1) {
			m1[a][0] += b;
			m1[a][1] += c;
		} else {
			vector<int> temp;
			temp.push_back(b);
			temp.push_back(c);
			m1.insert(make_pair(a,temp));
		}
	}
	int total = 0;
	int wasteda = 0;
	int wastedb = 0;

	for(auto &k:m1) {
		if(k.second[0] > k.second[1]) {
			int temp1 = k.second[0] - ((k.second[0] + k.second[1])/2 + 1);
			wasteda += temp1;
			wastedb += k.second[1];
			total = total + k.second[0] + k.second[1]; 
			cout << "A " << temp1 << " " << k.second[1] << endl;
		} else {
			int temp1 = k.second[1] - ((k.second[0] + k.second[1])/2 + 1);
			wasteda += k.second[0];
			wastedb += temp1;
			total = total + k.second[0] + k.second[1];
			cout << "B " << k.second[0] << " " << temp1 << endl;
		}
 	}
 	double gap = abs(wasteda - wastedb)/(double)total;
 	cout << fixed << setprecision(10) << gap;
 	return 0;
	
}