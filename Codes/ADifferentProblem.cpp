#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll a,b;
	while(cin>>a>>b) {
		ll diff = abs(a-b);
		cout << diff << endl;
	}
	return 0;
}