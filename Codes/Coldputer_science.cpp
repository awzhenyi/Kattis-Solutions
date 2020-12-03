#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n;
	cin>>n;
	int count = 0;
	while(n--) {
		int a;
		cin >> a;
		if (a<0)
			count++;
	}
	cout << count;
	return 0;
}