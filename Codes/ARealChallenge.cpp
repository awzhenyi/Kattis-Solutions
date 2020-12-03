#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll a;
	cin >> a;
	double p = sqrt(a) * 4;
	//check if has decimal places
	if(abs(p-int(p)==0))
		cout << p;
	else
		cout << fixed << setprecision(20) << p;
}