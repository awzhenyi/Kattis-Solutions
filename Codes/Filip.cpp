#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int reverse(int n) {
	int temp1 = 0;
	int temp;
	while(n!=0) {
		temp = n%10;
		temp1 = temp1*10 + temp;
		n/=10;
	}
	return temp1;
}


int main() {
	int a,b;
	cin >> a >> b;
	a = reverse(a);
	b = reverse(b);
	cout << ((a>b)?a:b);
	return 0;
}