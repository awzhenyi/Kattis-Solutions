#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//count prime factorisation
//print prime factors
void primefactors(int n) {
	int count = 0;
	while(n%2==0) {
		//cout << "2\t";
		count++;
		n/=2;
	}
	for(int i=3;i<=sqrt(n);i+=2) {
		while(n%i==0) {
			count++;
			n/=i;
			//cout<<i<<"\t"
		}
	}
	if (n>2)
		count++;
		//cout << n << "\t"
	cout << count;
}

int main() {
	int a;
	cin >> a;
	primefactors(a);
	return 0;
}