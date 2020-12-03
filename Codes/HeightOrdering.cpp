#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int cases;
	cin >> cases;
	while(cases--) {
		int steps = 0;
		int n,s;
		cin >> n;
		int a[21];
		//filling array
		for(int i=0;i<20;++i) {
			cin >> s;
			a[i] = s;
		}
		//insertion sort
		for(int i=1;i<20;++i) {
			int x = a[i];
			int j = i-1;
			for(; j>=0 && a[j]>x; --j) {
				a[j+1] = a[j];
				//for every swap, +1 step
				steps++;
			}
			a[j+1] = x;
		}
		cout << n << " " << steps << endl;
	}
	return 0;
}