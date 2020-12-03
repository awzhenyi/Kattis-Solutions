#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	double quality = 0;
	int a;
	cin >> a;
	while(a--) {
		double b,c;
		cin >> b >> c;
		quality += (b*c);
	}
	cout << fixed << setprecision(3) << quality;
	return 0;
}