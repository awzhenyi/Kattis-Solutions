#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n;
	cin >> n;
	double sl = 0;
	double min = 0;
	for(int i=0; i<n; ++i) {
		double a,b;
		cin >> a >> b;
		min += a;
		sl += b;
	}
	double temp = sl/(min*60);
	if (temp > 1)
		cout << fixed << setprecision(9) << temp << " ";
	else
		cout << "measurement error";
	return 0;
}