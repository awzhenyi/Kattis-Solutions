#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
	int n;
	cin >> n;
	while(n--) {
		int count = 0;
		int td,tm;
		cin >> td >> tm;
		vector<int> v1;
		while(tm--) {
			int a;
			cin >> a;
			v1.push_back(a);
		}
		int total = v1[0];
		//first month as long as 13 or more days
		if (v1[0] >= 13)
			count ++;
		for (int i=1; i<v1.size(); ++i) {
			if(total%7==0)
				if(v1[i]>=13)
					count ++;
			total += v1[i];
		}
		cout << count << endl;
	}
	return 0;
}