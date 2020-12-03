#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
	ll p,r,f;
	cin >> p >> r >> f;
	int result = 0;
	while(f >= p) {
		p*=r;
		result++;
	}
	cout << result << endl;
}

int main() {
	int n;
	cin >> n;
	while(n--) {
		solve();
	}
	return 0;
}

