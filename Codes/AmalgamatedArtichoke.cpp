#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


double calculate(int p,int a, int b,int c,int d,int k) {
	return p*(sin(a*k+b)+cos(c*k+d)+2);
}

int main() {
	int p,a,b,c,d,n;
	cin >> p >> a >> b >> c >> d >> n;
	vector<double> v1;
	for(int i=1;i<=n;++i) {
		double price = calculate(p,a,b,c,d,i);
		v1.push_back(price);
	}
	
	double decline = 0;
	double maximum = v1[0];
	for(int i=1; i<v1.size(); ++i) {
		decline = max(decline, maximum-v1[i]);
		maximum = max(maximum, v1[i]);
	}

	cout << fixed << setprecision(8) << decline;
	return 0;
}