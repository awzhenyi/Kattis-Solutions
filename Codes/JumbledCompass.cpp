#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int a,b;
	cin >> a >> b;
	if(a>b) {
		if(a-b>=180)
			cout << 360-a+b;
		else
			cout << b-a;
	} else {
		if(b-a<=180)
			cout << b-a;
		else
			cout << -1 * (a + 360 - b);
	}	
	return 0;
}