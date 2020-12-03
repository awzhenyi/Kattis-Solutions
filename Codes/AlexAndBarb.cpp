#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int k,m,n;
	cin >> k >> m >> n;
	if(k<=m)
		cout << "Barb";
	else {
		int a = floor((k-m)/n);
		if(a%2==0)
			cout << "Alex";
		else
			cout << "Barb";
	}
	return 0;
}