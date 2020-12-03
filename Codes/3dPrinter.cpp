#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n;
	cin >> n;
	n = ceil(log2(n)+1);
	cout << n;
	return 0;
}